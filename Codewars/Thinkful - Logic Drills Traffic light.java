/*
Thinkful - Logic Drills: Traffic light
https://www.codewars.com/kata/58649884a1659ed6cb000072
*/

public class TrafficLights {

  public static String updateLight(String current) {
    if ("green".equals(current)) {
      return "yellow";
    } else if ("red".equals(current)) {
      return "green";
    } else {
      return "red";
    }
  }  
}