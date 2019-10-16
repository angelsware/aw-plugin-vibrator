#ifndef __AW_VIBRATOR_VIBRATOR_DEFAULT_H__
#define __AW_VIBRATOR_VIBRATOR_DEFAULT_H__

#include <vibrator/aw_vibrator.h>

namespace Vibrator {
	class CVibrator_Default
		: public IVibrator
	{
	private:
		bool hasVibrator() override { return false; }
		void vibrate(long milliseconds, int amplitude) override {}
		void cancel() override {}
	};
}

#endif
