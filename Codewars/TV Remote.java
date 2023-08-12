/*
TV Remote
https://www.codewars.com/kata/5a5032f4fd56cb958e00007a
*/

import java.util.*;

public class Dinglemouse {

        private static class Pair {
            private Integer x;
            private Integer y;

            public Pair(final Integer x, final Integer y) {
                this.x = x;
                this.y = y;
            }

            public Integer getX() { return x; }

            public Integer getY() { return y; }

            public Integer getDistance(final Pair anotherSymbol) {
                return Math.abs(this.x - anotherSymbol.getX()) + Math.abs(this.y - anotherSymbol.getY());
            }
        }

        private static String[] arr = new String[]{
                "abcde123",
                "fghij456",
                "klmno789",
                "pqrst.@0",
                "uvwxyz_/"
        };
        private static Map<Character, Pair> map = new HashMap<>();

        private static void initMap() {
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr[i].length(); j++) {
                    map.put(arr[i].charAt(j), new Pair(i, j));
                }
            }
        }

        private static Integer getNumberOfTypes(final Character currentPosition,
                                                final Character finalPosition) {
            if (!map.containsKey(currentPosition) || ! map.containsKey(finalPosition)) {
                return 0;
            }

            return map.get(currentPosition).getDistance(map.get(finalPosition)) + 1;
        }

        public static int tvRemote(final String word) {
            initMap();
            Character previousPosition = 'a';
            Integer ans = 0;
            for (int i = 0; i < word.length(); i++) {
                final Character currentPosition = word.charAt(i);
                ans += getNumberOfTypes(previousPosition, currentPosition);
                previousPosition = currentPosition;
            }
            return ans;
        }

    }