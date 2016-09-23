/* Set terlebih dahulu DLLnya melalui, Java Build Path -> JRE/JDK System Library [xx] , 
 * dropdown pilih Native Library Location lalu set path/folder tempat DLL folder berada */

/* Override DLL menjadi kelas beserta fungsi-fungsi native didalamnya */
/* Nama kelas harus sama */
class JNIExample {
	/* methode native interface */
	public native String cetakString(String c);
	public native void fungsiLain();
	public native int square(int j);
	
	/* Static ini adalah singleton dan di load pertama kali */
	static {
		System.err.println("Load DLL");
		System.loadLibrary("JNIExample");
	}
}

/* Implementasi JNI DLL */
class JNIImplementasi {
	public static void main(String[] args) {
		System.err.println("Load program");
		JNIExample jniExample = new JNIExample();
		System.out.println(jniExample.cetakString("Fajar"));
		jniExample.fungsiLain();
		System.out.println(jniExample.square(5));	
	}
}