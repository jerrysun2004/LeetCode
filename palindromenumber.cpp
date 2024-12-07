//september 13th, 2022

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mi;
        int l =0 , r = 0;
        int maxL = 0;
        for (char a: s){
            if (mi.count(a)==0 || mi[a] < l){
                mi[a] = r;
                maxL=max(maxL, r-l+1);
            } else {
                l = mi[a]+1;
                mi[a] = r;
            }
            r++;
        }
        return maxL;
    }
}
