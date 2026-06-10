class Solution {
public:
    int strStr(string haystack, string needle) {
         for(int i=0;i<needle.length();i++){
            for(int j=0;j<haystack.length();j++){
              return haystack.find(needle);
            }
         }
         return -1;
    }
};
