//November 28th, 2022


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mi;
        for (int i=0; i<nums.size(); i++){
            mi[nums[i]]++;
        }
        for (int i=0; i<nums.size(); i++){
            if (mi[nums[i]]==1)
                return nums[i];
        }
        return 0;
    }
};
