//november 30th, 2022 and January 26th, 2023
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //iterate through the vector
        //if positive add to data structure
        map<int,int> mi;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]>0)
               mi[nums[i]]++;
        }
       
        for (int i=1; i<nums.size()+1; i++)
        {
            if (mi[i]==0)
                return i;
        }
        return nums.size()+1;
    }
};
