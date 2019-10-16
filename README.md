# aw-plugin-vibrator

Vibrator plugin for Angels' Ware rendering engine.

### Getting Started

Add the **plugins** section and the **VIBRATE** permission for Android to the **config.yaml** file of your project.

```
plugins:
	repo: https://github.com/angelsware/aw-plugin-vibrator.git

preferences:
	android:
		permissions:
		- name: android.permission.VIBRATE
```
```
Vibrator::IVibrator* vibrator = Vibrator::CVibratorFactory::create();
vibrator->vibrate(100, -1);
```
