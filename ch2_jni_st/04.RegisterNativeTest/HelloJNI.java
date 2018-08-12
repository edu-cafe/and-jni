class HelloJNI
{
	native void printHello();
	native void printString(String str);
	
	static {
		//System.loadLibrary("hellojnimap");
		System.load("/work/JniTest/04.RegisterNativeTest/hellojnimap.so");
	}
	
	public static void main(String[] args) {
		HelloJNI myJNI = new HelloJNI();
		
		myJNI.printHello();
		myJNI.printString("Hello from printString_cFunction!!");
	}
	
}
