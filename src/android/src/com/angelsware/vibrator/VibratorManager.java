package com.angelsware.vibrator;

import android.os.VibrationEffect;
import android.os.Vibrator;

import com.angelsware.engine.AppActivity;

public class VibratorManager {
	public static boolean hasVibrator() {
		Vibrator vibrator = (Vibrator) AppActivity.getActivity().getSystemService(Context.VIBRATOR_SERVICE);
		if (vibrator != null) {
			return vibrator.hasVibrator();
		}
		return false;
	}

	public static void vibrate(long milliseconds, int amplitude) {
		Vibrator vibrator = (Vibrator) AppActivity.getActivity().getSystemService(Context.VIBRATOR_SERVICE);
		if (vibrator != null) {
			vibrator.vibrate(VibrationEffect.createOneShot(milliseconds, amplitude));
		}
	}

	public static void cancel() {
		Vibrator vibrator = (Vibrator) AppActivity.getActivity().getSystemService(Context.VIBRATOR_SERVICE);
		if (vibrator != null) {
			vibrator.cancel();
		}
	}
}
