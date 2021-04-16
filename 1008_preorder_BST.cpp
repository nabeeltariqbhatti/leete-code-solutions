/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return buildTree(preorder, 0, preorder.size()-1);
    }
    
TreeNode* buildTree(vector<int>& preorder, int l , int r) {
    if(l>r)return nullptr;
    
    
    TreeNode* root = new TreeNode(preorder[l]);
    
  if(preorder.size()==0) return nullptr;
    

    
    if(l==r) return root;
    
    
    int idx=l+1;
    
    while(idx<=r && preorder[idx]<preorder[l])
        idx++;
    
    
    root->left=buildTree(preorder, l+1, idx-1);
    root->right=buildTree(preorder,idx, r);
    
    
    
    return root;
}

};
