# Real-Time Edge Detection Viewer (Android + OpenCV + OpenGL + JNI)

## Features Implemented
- Camera2 preview using TextureView
- Frame processing using OpenCV in native C++ via JNI
- Edge detection using Canny algorithm


## Setup Instructions
1. Clone the repo and open in Android Studio
2. Download OpenCV Android SDK and import `sdk/java` as module
3. Connect device and run `MainActivity`

## Architecture
- Java: UI & Camera2
- JNI: Java <-> C++ bridge
- C++: OpenCV edge detection

## Notes
- NDK 21.3+
- OpenCV 4.5+
- Tested on Android 9+

### Build Instructions
- Requires NDK r25+
- OpenCV 4.x native (jniLibs)
- Android Studio Arctic Fox or newer
