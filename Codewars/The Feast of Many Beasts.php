/*
The Feast of Many Beasts
https://www.codewars.com/kata/5aa736a455f906981800360d
*/

function feast($beast, $dish){
  return $beast[0] == $dish[0] && $beast[-1] == $dish[-1];
}