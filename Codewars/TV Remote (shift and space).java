/*
TV Remote (shift and space)
https://www.codewars.com/kata/5b277e94b6989dd1d9000009
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

        private static String[] simpleSymbols = new String[]{
                "abcde123",
                "fghij456",
                "klmno789",
                "pqrst.@0",
                "uvwxyz_/"
        };
        private static String[] complexSymbols = new String[] {"aA", " "};
        private static Map<String, Pair> symbolsMap = new HashMap<>();
        private static boolean shiftActive = false;

        private static void initMap() {
            if (!symbolsMap.isEmpty()) {
                return ;
            }

            Integer currentLine = 0;
            for (int i = 0; i < simpleSymbols.length; i++) {
                for (int j = 0; j < simpleSymbols[i].length(); j++) {
                    symbolsMap.put(String.valueOf(simpleSymbols[i].charAt(j)), new Pair(i, j));
                }
                currentLine++;
            }
            for (int i = 0; i < complexSymbols.length; i++) {
                symbolsMap.put(complexSymbols[i], new Pair(currentLine, i));
            }
        }

        private static boolean isNeedShiftCount(final Character finalPosition) {
            return shiftActive && Character.isLowerCase(finalPosition)
                    || !shiftActive && Character.isUpperCase(finalPosition);
        }

        private static Integer getNumberOfTypes(final Character currentPosition,
                                                final Character finalPosition) {
            final String currentPosStr = String.valueOf(currentPosition).toLowerCase();
            final String finalPosStr = String.valueOf(finalPosition).toLowerCase();

            if (!symbolsMap.containsKey(currentPosStr) || ! symbolsMap.containsKey(finalPosStr)) {
                return 0;
            }
            Integer ans = 0;

            if (isNeedShiftCount(finalPosition)) {
                ans += symbolsMap.get(currentPosStr).getDistance(symbolsMap.get(complexSymbols[0])) + 1;
                ans += symbolsMap.get(complexSymbols[0]).getDistance(symbolsMap.get(finalPosStr)) + 1;
                shiftActive = Character.isUpperCase(finalPosition);
            } else {
                ans += symbolsMap.get(currentPosStr).getDistance(symbolsMap.get(finalPosStr)) + 1;
            }

            return ans;
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
            shiftActive = false;
            return ans;
        }

    }