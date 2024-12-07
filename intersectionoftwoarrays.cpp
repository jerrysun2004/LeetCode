//December 6th, 2022

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mip1,mip2;
        for (int i=0; i<nums1.size(); i++){
            mip1[nums1[i]]++;
        }
        for (int i=0; i<nums2.size(); i++){
            mip2[nums2[i]]++;
        }
        map<int,int>::iterator i;
        vector<int> ans;
        for (i=mip1.begin(); i!=mip1.end(); i++){
            if (i->second>0 && mip2[i->first]>0)
                ans.push_back(i->first);
        }
        return ans;
    }
};
