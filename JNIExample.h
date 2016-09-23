#ifndef JNIEXAMPLE_H_
#define JNIEXAMPLE_H_

JNIEXPORT void JNICALL Java_JNIExample_fungsiHello (JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_JNIExample_fungsiLain(JNIEnv *, jobject);

JNIEXPORT jstring JNICALL Java_JNIExample_cetakString(JNIEnv *, jobject, jstring);

JNIEXPORT jint JNICALL Java_JNIExample_square(JNIEnv *, jobject, jint);

#endif /* JNIEXAMPLE_H_ */