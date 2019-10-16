#ifndef __AW_VIBRATOR_VIBRATOR_FACTORY_H__
#define __AW_VIBRATOR_VIBRATOR_FACTORY_H__

namespace Vibrator {
	class IVibrator;

	class CVibratorFactory {
	public:
		static IVibrator* create();
		static void destroy(IVibrator* vibrator);
	};
}

#endif
