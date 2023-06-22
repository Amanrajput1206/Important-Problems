// Problem Statement: https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> out(n);
        out[0]=1;
        for(int i=1;i<nums.size();i++){
            out[i] = out[i-1]*nums[i-1];
        }
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            out[i] = out[i]*right;
            right=right*nums[i];
        }
        return out;
    }
};
