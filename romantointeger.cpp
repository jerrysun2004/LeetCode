//November 15th, 2022

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        while(!s.empty()){
            if (s.substr(0,2)=="IV")
            {
                ans+=4;
               s.erase(0,2);
                continue;
            }
             if (s.substr(0,2)=="IX")
            {
                ans+=9;
             s.erase(0,2);
                continue;
            }
             if (s.substr(0,2)=="XL")
            {
                ans+=40;
            s.erase(0,2);
                continue;
            }
             if (s.substr(0,2)=="XC")
            {
                ans+=90;
               s.erase(0,2);
                continue;
            } if (s.substr(0,2)=="CD")
            {
                ans+=400;
               s.erase(0,2);
                continue;
            } if (s.substr(0,2)=="CM")
            {
                ans+=900;
               s.erase(0,2);
                continue;
            }
            if (s[0]=='M')
                ans+=1000;
            if (s[0]=='D')
                ans+=500;
            if (s[0]=='C')
                ans+=100;
            if (s[0]=='L')
                ans+=50;
            if (s[0]=='X')
                ans+=10;
            if (s[0]=='V')
                ans+=5;
            if (s[0]=='I')
                ans+=1;
            cout << ans << endl;
            s.erase(0,1);
        }
        return ans;
    }
};
