//November 29th, 2022

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer (n);
        for (int i=1; i<n+1; i++){
            if (i%3==0 && i%5==0)
                answer[i-1]="FizzBuzz";
           else if (i%3==0)
                answer[i-1]="Fizz";
             else if (i%5==0)
                answer[i-1]="Buzz";
            else{
                answer[i-1]=to_string(i);
            }
                
        }
        return answer;
    }
};
