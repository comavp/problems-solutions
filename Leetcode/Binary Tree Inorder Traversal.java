/*
Binary Tree Inorder Traversal
https://www.leetcode.com/problems/binary-tree-inorder-traversal
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
    public List<Integer> inorderTraversal(TreeNode root) {
        if (root == null) {
            return new ArrayList<>();
        }
        List<Integer> ans = inorderTraversal(root.left);
        ans.add(root.val);
        ans.addAll(inorderTraversal(root.right));
        
        return ans;
    }
}