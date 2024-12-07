//October 25th, 2022

class Solution {
    public int trailingZeroes(int n) {
        int i=5;
        int sum=0;
        while (i<=n){
            sum+=n/i;
            i*=5;
            
        }
        return sum;
    }
}
