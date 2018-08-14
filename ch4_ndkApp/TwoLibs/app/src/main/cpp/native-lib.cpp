#include <jni.h>
#include <string>
#include "first.h"

extern "C"

JNIEXPORT jint
JNICALL Java_com_soo_twolibs_MainActivity_add (
        JNIEnv *env,
        jobject thiz, jint x, jint y) {
    return first(x, y);
}

