#include <jni.h>

int main()
{
	________env;
	________vm;
	___________ vm_args;
	___________ options[1];
	jint res;
	jclass cls;
	jmethodID mid;
	jstring jstr;
	jclass stringClass;
	jobjectArray args;
	
	//1.Setting Oprion Values to send the VM
	options[0].optionString = "-Djava.class.path=.";
	vm_args.version = 0x00010002;
	vm_args.options = options;
	vm_args.nOptions = 1;
	vm_args.ignoreUnrecognized = JNI_TRUE;
	
	//2.VM create
	res = _______________________
	
	//3.Class search & load
	cls = _______________________
	
	//4.Get the main method ID
	mid = _____________________________
	
	//5.Create args of main method 
	jstr = (*env)->NewStringUTF(env, "Hello Invocation API!!");
	stringClass = (*env)->FindClass(env, "java/lang/String");
	args = (*env)->NewObjectArray(env, 1, stringClass, jstr);
	
	//6.Call the main method
	________________________________
	
	//7.Destroy the VM
	_________________
}
