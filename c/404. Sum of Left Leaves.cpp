/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum =0, k=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root== NULL) return 0;
        
        if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL){
            sum+=root->left->val;
            k=sumOfLeftLeaves(root->left);
        }
        
        else if(root->left!=NULL){
            //sum+=root->left->val;
            k=sumOfLeftLeaves(root->left);
        }
        if(root->right!=NULL){
            k=sumOfLeftLeaves(root->right);
        }
        
    
        
        return sum;
        
    }
};
