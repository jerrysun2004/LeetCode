//November 28th, 2022

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> si;
        for (int i=0; i<nums.size(); i++){
            si.insert(nums[i]);
        }
        for (int i=1; i<nums.size()+1; i++){
            if (!si.count(i))
                return i;
        }
        return 0;
    }
};
