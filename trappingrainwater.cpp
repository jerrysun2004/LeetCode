//November 29th, 2022

class Solution {
    //minimum of left and right heights
    //in between blocks can be smaller
    //how to calculate?
    
public:
    int trap(vector<int>& height) {
    int minleft=-1; //left brick that serves as border
    int64_t watertrapped=0; //what we are trying to calculate
        //range through all the heights
        //if smaller add difference otherwise change left brick
        //how to check if left brick is local max?
        //try to use math??
        //left sum+right sum=L+R+2* watertrappped
       int leftsum=0;//water from the leftmost side
        int rightsum=0;//water from the rightmost side
        int mx=-1; //max height of brick
        unsigned long long bricksize=0;
        for (int i=0; i<height.size(); i++){
            bricksize+=height[i];
            mx=max(height[i],mx);
            if (height[i]>=minleft){
                minleft=height[i];
            }
            if (height[i]<minleft){
                leftsum+=minleft-height[i];
            }
        }
        minleft=-1;
         for (int i=height.size()-1; i>=0; i--){
            if (height[i]>=minleft){
                minleft=height[i];
            }
            if (height[i]<minleft){
                rightsum+=minleft-height[i];
            }
         }
        cout << mx*height.size() << endl;
        cout << bricksize << endl;
        cout << leftsum << endl; 
        cout << rightsum << endl;
        watertrapped=bricksize+leftsum+rightsum-mx*height.size();
     
        return watertrapped;
    }
};
