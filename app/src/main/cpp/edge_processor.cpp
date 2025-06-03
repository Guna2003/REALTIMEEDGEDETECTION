#include <opencv2/opencv.hpp>
#include <android/log.h>

#define LOG_TAG "EdgeProcessor"
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

void processEdgeDetection(const uint8_t* nv21, int width, int height) {
    cv::Mat yuv(height + height / 2, width, CV_8UC1, (uchar *)nv21);
    cv::Mat bgr, edges;

    cv::cvtColor(yuv, bgr, cv::COLOR_YUV2BGR_NV21);
    cv::Canny(bgr, edges, 100, 200);

    LOGI("Processed frame %dx%d", width, height);
}
