#include <jni.h>
#include <android/log.h>

#ifdef __cplusplus
extern "C" {
#endif

#define	LOG_TAG 	"SOO"
#define	LOGI(...)	__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

/*
 * Class:     com_soo_addjni_MainActivity
 * Method:    addJNI
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_soo_logjni_MainActivity_addJNI
        (JNIEnv *env, jobject thiz, jint num1, jint num2)
{
    __android_log_print(ANDROID_LOG_DEBUG, "SOO",
                        "JNI Function_addJNI() Called(num1:%d, num2:%d)!!", num1, num2);
    LOGI("JNI Function_addJNI() Called(num1:%d, num2:%d)!!", num1, num2);
    return num1+num2;
}

#ifdef __cplusplus
}
#endif
