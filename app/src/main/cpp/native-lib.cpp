#include <jni.h>
#include <opencv2/opencv.hpp>
#include "edge_processor.cpp"

extern "C" JNIEXPORT void JNICALL
Java_com_example_edgedetector_MainActivity_processFrame(
        JNIEnv *env,
        jobject /* this */,
        jbyteArray data,
        jint width,
        jint height) {
    jbyte* buffer = env->GetByteArrayElements(data, 0);
    cv::Mat img(height + height / 2, width, CV_8UC1, (unsigned char *)buffer);
    cv::Mat gray, edges;
    cv::cvtColor(img, gray, cv::COLOR_YUV2BGR_NV21);
    cv::Canny(gray, edges, 100, 200);
    env->ReleaseByteArrayElements(data, buffer, 0);
}
