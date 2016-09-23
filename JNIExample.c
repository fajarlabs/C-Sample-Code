#include <jni.h>  
#include <stdio.h>  
#include "JNIExample.h"   
#include <string.h>

/* Cara compile
 * gcc -D_JNI_IMPLEMENTATION_ -Wl,--kill-at -I"%JAVA_HOME%"\include -I"%JAVA_HOME%"\include\win32 JNIExample.c -shared -o JNIExample.dll
 * 
 * http://stackoverflow.com/questions/5963266/call-c-function-from-java
 * 
 * Daftar fungsi header jni.h http://xdprof.sourceforge.net/doxygen/jni_8h-source.html
 */

JNIEXPORT void JNICALL Java_JNIExample_fungsiHello(JNIEnv *env, jobject obj)  {
     printf("Hello World!\n");
     return;  
}


JNIEXPORT void JNICALL Java_JNIExample_fungsiLain(JNIEnv *env, jobject obj) {
	printf("Hello world Lainnya\n");
} 

/* Membuat fungsi yang mengembalikan string sekaligus concat char didalamnya */
JNIEXPORT jstring JNICALL Java_JNIExample_cetakString(JNIEnv *env, jobject obj, jstring string) {
	/* convert jstring ke char* */
    const char *name = (*env)->GetStringUTFChars(env,string, NULL);
    char msg[60] = "Hello ";
    jstring result;
   
    /* concat ke string */
    strcat(msg, name); 
    /* Release char */ 
    (*env)->ReleaseStringUTFChars(env,string, name);   

    /* Cetak pesan */
    puts(msg);      

    /* convert char ke jstring */   
    result = (*env)->NewStringUTF(env,msg); 
    return result;
} 

JNIEXPORT jint JNICALL Java_JNIExample_square(
    JNIEnv *env, jobject obj, jint i) {
  return i * i;
}
