/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_librealsense_Native */

#ifndef _Included_org_librealsense_Native
#define _Included_org_librealsense_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_librealsense_Native
 * Method:    rs2CreateContext
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2CreateContext
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2QueryDevices
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2QueryDevices
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetDeviceCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetDeviceCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2CreateDevice
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2CreateDevice
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2SupportsDeviceInfo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2SupportsDeviceInfo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetDeviceInfo
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_librealsense_Native_rs2GetDeviceInfo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2CreatePipeline
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2CreatePipeline
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2CreateConfig
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2CreateConfig
  (JNIEnv *, jclass);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteConfig
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2DeleteConfig
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ConfigEnableStream
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2ConfigEnableStream
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jint, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ConfigEnableDevice
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2ConfigEnableDevice
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ConfigDisableStream
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2ConfigDisableStream
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ConfigCanResolve
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2ConfigCanResolve
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2PipelineStartWithConfig
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2PipelineStartWithConfig
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2PipelineProfileGetStreams
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2PipelineProfileGetStreams
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2PipelineWaitForFrames
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2PipelineWaitForFrames
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2EmbeddedFramesCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2EmbeddedFramesCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ExtractFrame
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2ExtractFrame
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2ReleaseFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2ReleaseFrame
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2IsFrameExtendableTo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2IsFrameExtendableTo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetFrameWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetFrameWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetFrameHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetFrameHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetFrameStrideInBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetFrameStrideInBytes
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DepthFrameGetDistance
 * Signature: (JII)F
 */
JNIEXPORT jfloat JNICALL Java_org_librealsense_Native_rs2DepthFrameGetDistance
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetFrameData
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_librealsense_Native_rs2GetFrameData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2QuerySensors
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2QuerySensors
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetSensorsCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetSensorsCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteSensorList
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2DeleteSensorList
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteSensor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2DeleteSensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2CreateSensor
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2CreateSensor
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetSensorInfo
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_librealsense_Native_rs2GetSensorInfo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2SupportsSensorInfo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2SupportsSensorInfo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2IsSensorExtendableTo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2IsSensorExtendableTo
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetDepthScale
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_org_librealsense_Native_rs2GetDepthScale
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DepthStereoFrameGetBaseline
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_org_librealsense_Native_rs2DepthStereoFrameGetBaseline
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetStreamProfiles
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2GetStreamProfiles
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetStreamProfileCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_librealsense_Native_rs2GetStreamProfileCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteStreamProfilesList
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2DeleteStreamProfilesList
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetStreamProfile
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2GetStreamProfile
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteStreamProfile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_librealsense_Native_rs2DeleteStreamProfile
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2GetVideoStreamIntrinsics
 * Signature: (JLorg/librealsense/Intrinsics;)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2GetVideoStreamIntrinsics
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_librealsense_Native
 * Method:    rs2DeleteIntrinsics
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_librealsense_Native_rs2DeleteIntrinsics
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
