#include <jni.h>
#include <stdio.h>

void printHelloNative(JNIEnv *env, jobject obj);
void printStringNative(JNIEnv *env, jobject obj, jstring string);

JNIEXPORT jint JNICALL __________(JavaVM *vm, void *reserved)
{
	JNIEnv *env = NULL;
	JNINativeMethod nm[2];
	jclass cls;
	jint result = -1;
	
	if(vm->GetEnv((void**)&env, JNI_VERSION_1_4) != JNI_OK) {
		printf("Error");
		return JNI_ERR;
	}
	
	cls = ____________("HelloJNI");
	
	..................
	
	..................
	
	..................
	
	return JNI_VERSION_1_4;
}

void printHelloNative(JNIEnv *env, jobject obj) 
{
	printf("Hello World in C++!!\n");
	return;
}

void printStringNative(JNIEnv *env, jobject obj, jstring string)
{
	//const char *str = (*env)->GetStringUTFChars(env, string, 0);
	const char *str = env->GetStringUTFChars(string, 0);
	printf("%s\n", str);
	return;
}

#if 0
JNIEXPORT void JNICALL Java_HelloJNI_printHello
  (JNIEnv *env, jobject obj) 
{
	printf("Hello World in C!!\n");
	return;
}

JNIEXPORT void JNICALL Java_HelloJNI_printString
  (JNIEnv *env, jobject obj, jstring string)
{
	const char *str = (*env)->GetStringUTFChars(env, string, 0);
	printf("%s\n", str);
	return;
}
#endif
