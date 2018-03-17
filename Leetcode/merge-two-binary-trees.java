/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

// https://leetcode.com/problems/merge-two-binary-trees/description/

class Solution {
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if (t1 == null && t2 == null) return null;
                
        return mergePreOrder(t1, t2);
    }
    
    private TreeNode mergePreOrder(TreeNode t1, TreeNode t2) {
        if (t1 == null && t2 == null) return null;
        
        int val = (t1 != null ? t1.val : 0) + (t2 != null ? t2.val : 0);
        
        TreeNode t3 = new TreeNode(val);
        
        t3.left = mergePreOrder(t1 != null ? t1.left : null, t2 != null ? t2.left : null );
        
        t3.right = mergePreOrder(t1 != null ? t1.right : null, t2 != null ? t2.right : null );
        
        return t3;
    }
}
