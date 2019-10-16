#ifndef __AW_VIBRATOR_VIBRATOR_H__
#define __AW_VIBRATOR_VIBRATOR_H__

namespace Vibrator {
	class IVibrator
	{
	public:
		virtual ~IVibrator() {}

		virtual bool hasVibrator() = 0;
		virtual void vibrate(long milliseconds, int amplitude) = 0;
		virtual void cancel() = 0;
	};
}

#endif
