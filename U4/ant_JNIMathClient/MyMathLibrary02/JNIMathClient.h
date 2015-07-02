#include <jni.h>
#ifndef _Included_JNIMathClient
#define _Included_JNIMathClient
#ifdef __cplusplus
extern "C"{
       #endif
       /*
       *
       * Class: JNIMathClient
       * Method: addTwoNumbers
       * Signature:(II)I
       */
       JNIEXPORT jint JNICALL Java_JNIMathClient_addTwoNumbers
       (JNIEnv *, jobject, jint,jint);
       /* 
       * Class: JNIMathClient
       * Method: multiplyTwoNumbers
       * Signature: (II)I
       */
       JNIEXPORT jint JNICALL Java_JNIMathClient_multiplyTwoNumbers
       (JNIEnv *, jobject, jint, jint);
       #ifdef __cplusplus
       }
       #endif
       #endif 
