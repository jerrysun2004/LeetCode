//November 28th, 2022

class Solution {
    int sqdigits(int x){
        int ans=0;
        while (x>0){
            ans+=(x%10)*(x%10);
            x/=10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        set<int> si;
        while (true){
            if (sqdigits(n)==1)
                return true;
             if (si.count(n)>0)
                return false;
            si.insert(n);
            if (si.count(sqdigits(n))>0)
                return false;
            cout << *si.begin() << endl;
            n=sqdigits(n);
            
        }
        return false;
    }
};
