#include<stdio.h>

struct TreeNode{
    int val;
    struct TreeNode* right;
    struct TreeNode* left;
};

struct TreeNode* searchBST(struct TreeNode* root, int val){
    struct TreeNode *curr = root;

    //Always repeats to find the right number within the root and return the whole root
    while(curr){
        if(curr->val == val){
            return curr;
        }else if(curr->val > val){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    
    return curr;
}