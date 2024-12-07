class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> nummap;
      int n = nums.size();
      for (int i=0; i<n; i++){
        nummap[nums[i]]=i;
      }
    for (int i=0; i<n; i++){
        int count = target-nums.at(i);
        if (nummap.count(count) && nummap[count]!=i)
            return {i, nummap[count]};
    }
    return {};
    }

};
//9/11/2022 and 11/16/2024
