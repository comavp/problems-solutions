/*
Human Readable Time
https://www.codewars.com/kata/52685f7382004e774f0001f7
*/

public class HumanReadableTime {
    private static String toStringCustom(final int digit) {
        return digit > 9 ? String.valueOf(digit) : "0" + String.valueOf(digit);
    }
    
    public static String makeReadable(int seconds) {
        final int numberOfSecondsInMinute = 60;
        final int numberOfSecondsInHour = 3600;
        final int[] arr = new int[2];
        arr[0] = seconds / numberOfSecondsInHour;
        seconds -= arr[0] * numberOfSecondsInHour;
        arr[1] = seconds / numberOfSecondsInMinute;
        seconds -= arr[1] * numberOfSecondsInMinute;
        return String.format("%s:%s:%s", toStringCustom(arr[0]), toStringCustom(arr[1]), toStringCustom(seconds));
    }
}