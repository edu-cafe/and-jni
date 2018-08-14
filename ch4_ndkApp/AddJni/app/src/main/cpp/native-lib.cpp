#include <jni.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_soo_addjni_MainActivity
 * Method:    addJNI
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_soo_addjni_MainActivity_addJNI
        (JNIEnv *env, jobject thiz, jint num1, jint num2)
{
    return num1+num2;
}

#ifdef __cplusplus
}
#endif
