class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.length();
        int m=magazine.length();
        for(int j=0;j<r;j++){
            for(int i=0;i<m;i++)
            {
                if(ransomNote[j]!=magazine[i] ){
                    return false;
                }
            }
        }
        return true;
    }
};
