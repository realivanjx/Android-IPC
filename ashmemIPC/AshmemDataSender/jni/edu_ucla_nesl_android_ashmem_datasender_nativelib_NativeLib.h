/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib */

#ifndef _Included_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
#define _Included_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
 * Method:    getFD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib_getFD
  (JNIEnv *, jclass);

/*
 * Class:     edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
 * Method:    writeToFD
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib_writeToFD
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
 * Method:    closeFD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib_closeFD
  (JNIEnv *, jclass);

/*
 * Class:     edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib
 * Method:    createFD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_edu_ucla_nesl_android_ashmem_datasender_nativelib_NativeLib_createFD
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif