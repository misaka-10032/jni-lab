#include <jni.h>
#include <stdio.h>

#include "misaka_lab_jni_App.h"

extern "C"
JNIEXPORT jstring JNICALL Java_misaka_lab_jni_App_getGreeting
  (JNIEnv *env, jobject obj) {
  return env->NewStringUTF("Hello world from JNI!");
}
