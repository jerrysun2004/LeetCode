//November 29th, 2022
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        map<int,int> ranges;
        vector<string> ans;
        int begin=0;
        
        if (nums.size()==0){
            
            return ans;
        }
         
            
        for (int i=1; i<nums.size(); i++){
            if (nums[i]!=1+nums[i-1]){
                ranges[begin]=i-1;
                begin=i;
            }
            
        }
       ranges[begin]=nums.size()-1;
        
        map<int,int>::iterator i;
        
        for (i=ranges.begin(); i!=ranges.end(); i++){
            if (i->first==i->second)
                ans.push_back(to_string(nums[i->first]));
            else{
            ans.push_back(to_string(nums[i->first])+"->"+to_string(nums[i->second]));
        }
        }
    
       
        return ans;
    }
};
