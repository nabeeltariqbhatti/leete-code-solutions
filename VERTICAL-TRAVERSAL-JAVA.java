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

/**
this needs optimization
/*
 class SpecialEntry{
     int row;
     int col;
      int value;
     SpecialEntry(int row, int col, int value){
         this.row=row;
         this.col=col;
             this.value=value;
     }

     @Override
     public String toString(){
         return "{row=" + row + ",value="+value+",col="+col+"}";
     }
 }
class Solution {
    public static Map<Integer,List<SpecialEntry>> memo = new HashMap<>();
    public List<List<Integer>> verticalTraversal(TreeNode root) {
         List<List<Integer>> result=new LinkedList<>();
         verticalTraversal(root,0,0);
         Set<Integer> keys = new TreeSet<>(memo.keySet());
         int i =0;
          for(Integer key : keys){
              result.add(i,new LinkedList<>());
                Collections.sort(memo.get(key), (o1, o2) -> {
          if(o1.row==o2.row && o1.col==o2.col){
              return o1.value-o2.value;
          }
          if(o1.col!=o2.col){
              return o1.col-o2.col;
          }
          return o1.row-o2.row;
        });
              for(SpecialEntry val: memo.get(key)){
                  result.get(i).add(val.value);
              }
              i++;
          }
          System.out.println(memo);
          memo.clear();
         return result;
    }

    public void verticalTraversal(TreeNode root ,int row, int col){
        if(root==null) return;
        if(memo.get(row)!=null){
            memo.get(row).add(new SpecialEntry(row,col,root.val));
        }else{
            memo.put(row,new LinkedList<>());
            memo.get(row).add(new SpecialEntry(row,col,root.val));
        }
        verticalTraversal( root.left,row-1,col+1);
        verticalTraversal( root.right,row+1,col+1);
    }




}
