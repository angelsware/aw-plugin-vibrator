#ifndef __AW_VIBRATOR_VIBRATOR_ANDROID_H__
#define __AW_VIBRATOR_VIBRATOR_ANDROID_H__

#include <vibrator/aw_vibrator.h>

namespace Vibrator {
	class CVibrator_Android
		: public IVibrator
	{
	private:
		bool hasVibrator() override;
		void vibrate(long milliseconds, int amplitude) override;
		void cancel() override;
	};
}

#endif
