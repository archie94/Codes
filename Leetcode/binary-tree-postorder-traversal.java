/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<>();
        
        traverse(root, ans);
        
        return ans;
    }
    
    private void traverse(TreeNode root, ArrayList<Integer> ans) {
        if (root == null) return;
        
        traverse(root.left, ans);
        traverse(root.right, ans);
        ans.add(root.val);
    }
}