cmake_minimum_required(VERSION 3.0)
project(JniHello)

set(NATIVE_ROOT src/main/cpp)
set(SRC ${NATIVE_ROOT}/misaka_lab_jni_App.cpp)

include_directories(${NATIVE_ROOT})
add_library(${PROJECT_NAME} SHARED ${SRC})

find_package(JNI REQUIRED)
include_directories(${JNI_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${JNI_LIBRARIES})
