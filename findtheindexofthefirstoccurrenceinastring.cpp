//December 1st ,2022

class Solution {
public:
    int strStr(string haystack, string needle) {
        //this feels like kmp when needle is some string that is really repeated
        //we can probably reduce run time, but not sure how to do that
        for (int i=0; i<haystack.size(); i++){
            if (needle[0]==haystack[i])
                if (haystack.substr(i,needle.length())==needle)
                    return i;
        }
        return -1;
    }
};
