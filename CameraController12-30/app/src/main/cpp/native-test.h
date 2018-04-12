/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/features2d.hpp>
#include <vector>
#include "test.h"
#include<android/bitmap.h>
/* Header for class com_example_wurui_kcf_ndk_MainActivity */

#ifndef _Included_com_example_wurui_kcf_ndk_MainActivity
#define _Included_com_example_wurui_kcf_ndk_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_wurui_kcf_ndk_MainActivity
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_wurui_kcf_1ndk_MainActivity_stringFromJNI
  (JNIEnv *, jobject);

/*
 * Class:     com_example_wurui_kcf_ndk_MainActivity
 * Method:    bodyDetect
 * Signature: (Ljava/lang/Object;Ljava/lang/Object;D[I)I
 */
JNIEXPORT jintArray JNICALL Java_com_example_wurui_kcf_1ndk_MainActivity_bodyDetect
  (JNIEnv *, jobject, jobject, jobject, jintArray);

JNIEXPORT jintArray JNICALL Java_com_example_wurui_kcf_1ndk_MainActivity_kcfDetect
        (JNIEnv *, jobject, jobject, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
