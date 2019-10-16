#include <vibrator/aw_vibratorfactory.h>
#include "aw_vibrator_android.h"

namespace Vibrator {
	IVibrator* CVibratorFactory::create() {
		return new CVibrator_Android();
	}

	void CVibratorFactory::destroy(IVibrator* vibrator) {
		delete vibrator;
	}
}
