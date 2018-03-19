/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<>();
        
        traverse(root, ans);
        return ans;
    }
    
    private void traverse(TreeNode root, ArrayList<Integer> ans) {
        if (root == null) return;
        
        traverse(root.left, ans);
        ans.add(root.val);
        traverse(root.right, ans);
    }
}