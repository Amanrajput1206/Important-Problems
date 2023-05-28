// Problem Statement: https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&id=leetcode-75
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string ans;
      int i=0;
      int j=0;
      while(i<word1.size() or j<word2.size()){
          if(i<word1.size()){
              ans = ans+word1[i++];
          }
          if(j<word2.size()){
              ans=ans+word2[j++];
          }
      }  
      return ans;
    }
};
