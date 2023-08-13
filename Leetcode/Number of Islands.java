/*
Number of Islands
https://www.leetcode.com/problems/number-of-islands
*/

class Solution {
    
    class Pair {
        private int x;
        private int y;

        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }

        public int getX() {
            return x;
        }
        public int getY() {
            return y;
        }
    }
    
    public int numIslands(char[][] grid) {
        boolean[][] used = new boolean[grid.length][grid[0].length];
        int ans = 0;

        for (int i = 0; i < used.length; i++) {
            for (int j = 0; j < used[i].length; j++) {
                if (!used[i][j] && grid[i][j] == '1') {
                    bfs(grid, used, i, j);
                    ans++;
                }
            }
        }

        return ans;
    }

    private void bfs(char[][] grid, boolean[][] used, int n, int m) {
        Queue<Pair> queue = new ArrayDeque<>();
        queue.add(new Pair(n, m));
        used[n][m] = true;

        while (!queue.isEmpty()) {
            Pair v = queue.poll();
            getNeighbors(grid, v).forEach(item -> {
                if (!used[item.getX()][item.getY()]) {
                    used[item.getX()][item.getY()] = true;
                    queue.add(item);
                }
            });
        }
    }

    private List<Pair> getNeighbors(char[][] grid, Pair v) {
        int n = v.getX();
        int m = v.getY();
        int rows = grid.length - 1;
        int columns = grid[0].length - 1;

        List<Pair> list = new ArrayList<>();
        if (n - 1 >= 0 && grid[n - 1][m] == '1') {
            list.add(new Pair(n - 1, m));
        }
        if (n + 1 <= rows && grid[n + 1][m] == '1') {
            list.add(new Pair(n + 1, m));
        }
        if (m - 1 >= 0 && grid[n][m - 1] == '1') {
            list.add(new Pair(n, m - 1));
        }
        if (m + 1 <= columns && grid[n][m + 1] == '1') {
            list.add(new Pair(n, m + 1));
        }

        return list;
    }
}