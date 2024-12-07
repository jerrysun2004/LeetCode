//November 28th, 2022

class Solution {
    int factors(int a, int b){
        int ans=0;
        while (a!=0){
            if (a%b==0){
                ans++;
            }else{
                break;
            }
            
            a/=b;
        }
        return ans;
    }
public:
    bool isUgly(int n) {
        int a=factors(n,2);
        cout << n << endl;
        int b=factors(n,3);
        cout << n << endl;
        int c=factors(n,5);
        cout << n << endl;
        if (pow(2,a)*pow(3,b)*pow(5,c)==n)
            return true;
        return false;
    }
};
