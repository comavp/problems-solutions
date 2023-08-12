/*
Create Phone Number
https://www.codewars.com/kata/525f50e3b73515a6db000b83
*/

public class Kata {
  public static String createPhoneNumber(int[] numbers) {
    final int firstPart = 3;
    final int secondPart = 3;
    final int thirdPart = 4;
    String result = "(";
    for (int i = 0; i < firstPart; i++) {
      result += numbers[i];
    }
    result += ") ";
    for (int i = firstPart; i < firstPart + secondPart; i++) {
      result += numbers[i];
    }
    result += "-";
    for (int i = firstPart + secondPart; i < firstPart + secondPart + thirdPart; i++) {
      result += numbers[i];
    }
    return result;
  }
}