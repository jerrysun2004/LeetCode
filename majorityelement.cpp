//November 28th, 2022

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mi;
        for (int i=0; i< nums.size(); i++){
            mi[nums[i]]++;
        }
        map<int,int>::iterator i;
        for (i=mi.begin(); i!=mi.end(); i++){
            if (i->second>nums.size()/2)
                return i->first;
        }
        return 0;
    }
};
