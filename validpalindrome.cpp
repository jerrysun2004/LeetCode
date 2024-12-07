//November 17th, 2024


class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char a: s){
            if (isalnum(a))
            cleaned+=tolower(a);
        }

        cout << cleaned << endl;
        stack<char> si;
        int cnt = 0;
        int sz = cleaned.length()/2;
        bool odd = cleaned.length() % 2 ? true : false;
        for (char a: cleaned){
            cnt++;
            cout << cnt << endl;
            if (cnt > sz){
                if (odd && cnt==sz+1){
                    
                   
                    continue;
                }
                if (si.top() == a){
                    si.pop();
                    continue;            
                }
                cout << si.top() << endl;
                return false;
            }
            si.push(a);
            cout << si.top() << endl;
        }
        return true;
    }
};
