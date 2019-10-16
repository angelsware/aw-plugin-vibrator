#include <vibrator/aw_vibratorfactory.h>
#include "aw_vibrator_default.h"

namespace Vibrator {
	IVibrator* CVibratorFactory::create() {
		return new CVibrator_Default();
	}

	void CVibratorFactory::destroy(IVibrator* vibrator) {
		delete vibrator;
	}
}
