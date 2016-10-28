/**
 * Copyright (c) 2016 Kristian Kraljic
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <jni.h>

#ifndef KEYBOARD_HOOK_H
#define KEYBOARD_HOOK_H
#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    E_SUCCESS = 0,
	E_NO_HANDLE_METHOD = -1,
	E_HOOK_FAILED = -2,
	E_UNHOOK_FAILED = -3,
	E_NOTIFY_FAILED = -4
} GlobalKeyboardHookError;

/*
 * Class:     GlobalKeyboardHook$NativeKeyboardHook
 * Method:    registerHook
 * Signature: ()V
 */
JNIEXPORT jint JNICALL Java_lc_kra_system_keyboard_GlobalKeyboardHook_00024NativeKeyboardHook_registerHook(JNIEnv *,jobject);
/*
 * Class:     GlobalKeyboardHook$NativeKeyboardHook
 * Method:    unregisterHook
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_lc_kra_system_keyboard_GlobalKeyboardHook_00024NativeKeyboardHook_unregisterHook(JNIEnv *,jobject);

#ifdef __cplusplus
}
#endif
#endif
