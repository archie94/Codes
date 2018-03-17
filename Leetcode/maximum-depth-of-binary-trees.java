/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

class Solution {
    
    int depth;
    
    public int maxDepth(TreeNode root) {        
        calcMaxDepth(root, 0);
        return depth;
    }
    
    private void calcMaxDepth(TreeNode root, int d) {
        if (root == null) return;
        
        d++;
        if (depth < d) depth = d;
        
        calcMaxDepth(root.left, d);
        calcMaxDepth(root.right, d);
    }
}
