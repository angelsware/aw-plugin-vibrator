#include "aw_vibrator_android.h"
#include <vibrator/aw_vibrator.h>
#include <platform/android/aw_jni.h>
#include <platform/android/aw_jnifunction.h>

namespace Vibrator {
	bool CVibrator_Android::hasVibrator() {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/vibrator/VibratorManager")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "hasVibrator", "()Z")) {
				return Platform::CJni::getEnv()->CallStaticBooleanMethod(clazz, method);
			}
		}
		return false;
	}

	void CVibrator_Android::vibrate(long milliseconds, int amplitude) {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/vibrator/VibratorManager")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "vibrate", "(JI)V")) {
				Platform::CJni::getEnv()->CallStaticVoidMethod(clazz, method, milliseconds, amplitude);
			}
		}
	}

	void CVibrator_Android::cancel() {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/vibrator/VibratorManager")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "cancel", "()V")) {
				Platform::CJni::getEnv()->CallStaticVoidMethod(clazz, method);
			}
		}
	}
}
