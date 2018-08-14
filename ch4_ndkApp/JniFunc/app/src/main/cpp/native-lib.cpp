#include <jni.h>
#include <string>
#include <android/log.h>

extern "C"

#define	LOG_TAG 	"SOO"
#define	LOGI(...)	__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

/*
 * Class:     com_soo_jnifunc_MainActivity
 * Method:    createJniObject
 * Signature: ()Lcom/soo/jnifunc/JniTest;
 */
JNIEXPORT jobject JNICALL Java_com_soo_jnifunc_MainActivity_createJniObject
        (JNIEnv *env, jclass clazz)
{
    jclass targetClass;
    jmethodID mid;
    jobject newObject;
    jstring helloStr;
    jfieldID fid;
    jint staticIntField;
    jint result;

    // Get the JniFuncMain Class staticIntField Value
    fid = env->GetStaticFieldID(clazz, "staticIntField", "I");
    staticIntField = env->GetStaticIntField(clazz, fid);
    LOGI("[CPP] Get JniFuncMain_Class_staticIntField!!\n");
    LOGI("[CPP] JniFuncMain_Class_staticIntField = %d\n", staticIntField);

    // Find the Class to create object
    targetClass = env->FindClass("com/soo/jnifunc/JniTest");

    // Find the Constructor
    mid = env->GetMethodID(targetClass, "<init>", "(I)V");

    // Create a JniTest Object
    LOGI("[CPP] JniTest_Object Create!!\n");
    newObject = env->NewObject(targetClass, mid, 100);

    // Call the Method of Object
    mid = env->GetMethodID(targetClass, "callByNative", "(I)I");
    result = env->CallIntMethod(newObject, mid, 200);

    // Set the intField_field of JniObject
    fid = env->GetFieldID(targetClass, "intField", "I");
    env->SetIntField(newObject, fid, result);

    // return created Object
    return newObject;
}
