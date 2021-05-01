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
    public boolean isCousins(TreeNode root, int x, int y) {
          AtomicInteger pX= new AtomicInteger();
        AtomicInteger pY=new AtomicInteger();
        AtomicInteger dX= new AtomicInteger(-1);
           AtomicInteger dY= new AtomicInteger(-1);
        parentDepth(root,x,y,0,dY,dX,pX,pY);
        return ((dX.get()==dY.get()) && (pX.get()!=pY.get()));
        
    }
     void parentDepth(TreeNode root, int x, int y,int d, AtomicInteger dY, AtomicInteger dX, AtomicInteger pX, AtomicInteger pY){
         if(root==null){
             return;
         }
         if(root.left !=null){
            if(root.left.val==x)
         {
             pX.set(root.val);
             dX.set(d+1);
         }else if(root.left.val==y){
             pY.set(root.val);
             dY.set(d+1);
         }  
         }
         
         if(root.right !=null){
               if(root.right.val==x)
         {
             pX.set(root.val);
             dX.set(d+1);
         }else if(root.right.val==y){
             pY.set(root.val);
             dY.set(d+1);
         } 
         }
         if(dX.get()!=-1 && dY.get()!=-1) return;
         
        parentDepth(root.left,x,y,d+1,dY,dX,pX,pY);
        parentDepth(root.right,x,y,d+1,dY,dX,pX,pY);
    }
}
