// Problem Statement: https://leetcode.com/problems/reverse-vowels-of-a-string/description/

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

class Solution {
public:
    string reverseVowels(string s) {
      int i=0;
      int n=s.size();
      int j=n-1;
      unordered_set<char> set= {'a','e','i','o','u','A','E','I','O','U'};
      while(i<j){
          if(set.find(s[i])!=set.end() && set.find(s[j])!=set.end()) swap(s[i++],s[j--]);
          if(set.find(s[i])==set.end()) i++;
          if(set.find(s[j])==set.end()) j--;
      }  
      return s;
    }
};
