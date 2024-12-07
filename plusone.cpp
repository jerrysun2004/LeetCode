//November 15th, 2022

class Solution {
public:
   
    vector<int> plusOne(vector<int>& digits) {
        
        
        if (digits[digits.size()-1]!=9){
            digits[digits.size()-1]+=1;
        return digits;
        }
        int good=false;
        for (int i=digits.size()-1; i>=0; i--){
            if (digits[i]==9){
                cout << "hello" << endl;
                digits[i]=0;
                continue;
            }
              if (digits[i]!=9){
                  good=true;
                  digits[i]+=1;
                  break;
              }
        
    }
        if (!good)
            digits.insert(digits.begin(),1);
        
     return digits;   
    }
};
