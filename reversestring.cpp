//December 6th, 2022

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i=0; i<s.size()/2; i++){
            char k=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=k;
        }
        
    }
};
