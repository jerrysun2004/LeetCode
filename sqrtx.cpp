//September 12th, 2022

class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        int ans=0;
        
        
      
        
        while (y < x){
           y+= 2*ans+1;
      
           
            ans++;
        
         
       } 
        if (y>x)
            ans--;
     
        
        return ans;
       
    } 
        
    
};
