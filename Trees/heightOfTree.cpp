// Problem statement: https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

// Given a binary tree, find its height.



class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int leftheight = height(node->left);
        int rightheight = height(node->right);
        
        return 1 + max(leftheight,rightheight);
        
    }
};
