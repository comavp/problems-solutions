/*
Minimum Depth of Binary Tree
https://www.leetcode.com/problems/minimum-depth-of-binary-tree
*/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int minDepth(TreeNode root) {
        if (root == null) return 0;
        if (root.left == null && root.right == null) return 1;

        int leftMin = minDepth(root.left);
        int rightMin = minDepth(root.right);
        if (leftMin == 0 || rightMin == 0) {
            return Math.max(leftMin, rightMin) + 1;
        } else {
            return Math.min(leftMin, rightMin) + 1;
        }
    }
}