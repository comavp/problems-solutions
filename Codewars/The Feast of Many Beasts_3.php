/*
The Feast of Many Beasts
https://www.codewars.com/kata/5aa736a455f906981800360d
*/

function feast($beast, $dish){
  if (substr($beast, 0, 1) == substr($dish, 0, 1) 
      && substr($beast, strlen($beast) - 1, 1) == substr($dish, strlen($dish) - 1, 1)) {
    return true;
  } else {
    return false;
  }
}