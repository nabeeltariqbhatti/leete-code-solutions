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
    int total = 0;
    public int pathSum(TreeNode root, int targetSum) {
            
        if (root == null ) return 0;
        

        
        findPathSum(root, targetSum, 0);
        
        pathSum(root.left, targetSum);
        pathSum(root.right, targetSum);
        return total;
        
        
        
        
    }
    
    public void findPathSum(TreeNode root, int targetSum, int currentSum){
        
        if (root == null ) return;
        
        currentSum += root.val;
        if(targetSum == currentSum){
            total++;
        }
        
         
        findPathSum(root.left, targetSum, currentSum);
         
        findPathSum(root.right, targetSum, currentSum);
        
        
    } 
}
