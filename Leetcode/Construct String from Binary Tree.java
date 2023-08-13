/*
Construct String from Binary Tree
https://www.leetcode.com/problems/construct-string-from-binary-tree
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
    public String tree2str(TreeNode root) {
        if (root == null) return "";

        String left = tree2str(root.left);
        String right = tree2str(root.right);

        String ans = String.valueOf(root.val);

        if (!"".equals(left) && !"".equals(right)) {
            ans += "(" + left + ")" + "(" + right + ")";
        } else if (!"".equals(right)) {
            ans += "()(" + right + ")";
        } else if (!"".equals(left)){
            ans += "(" + left + ")";
        }

        return ans;
    }
}