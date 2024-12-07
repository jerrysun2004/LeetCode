//november 29th, 2022, November 16th, 2024

class Solution {
public:
    bool isValid(string s) {
        stack<int> si;
        if (s.size()==1)
        return false;
        for (char c : s){
            if (c=='}' || c==')' || c==']'){
                char s;
                if (c=='}')
                s='{';
                 if (c==']')
                s='[';
                 if (c==')')
                s='(';
                if (si.size()==0)
                return false;
                if (si.top()!=s)
                return false;
                si.pop();
            } else{
            si.push(c);
            }
            
        }
        if (si.size()!=0)
        return false;
        return true;
    }
};
