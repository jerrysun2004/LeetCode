//December 3rd, 2022

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mci;
        for (int i=0; i<s.size(); i++)
           mci[s[i]]++;
        
       for (int i=0; i<s.size(); i++){
           if (mci[s[i]]==1)
               return i;
       }
        return -1;
    }
};
