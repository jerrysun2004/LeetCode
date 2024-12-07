//November 13th, 2022


class Solution {
    int fact(int x){
	if (x==0)
		return 1;
	int a=1;
	for (int i=1; i<x+1; i++)
		a*=i;
	return a;
}
public:
    string getPermutation(int n, int k) {
        string s;
        if (n==1 && k==1){
            s.push_back('1');
            return s;
        }
            
        int ans[n];
	if (k>fact(n))
		return 0;
	int a=k;
	for (int i=0; i<n-2; i++){
		ans[i]=a/fact(n-1-i);
		
		
		if (a==ans[i]*fact(n-1-i))
		{
			
			ans[i]-=1;
			a-=ans[i]*fact(n-1-i);
			
			
			continue;

		}
		
		a-=ans[i]*fact(n-1-i);
		
	}
	if (a==1){
		ans[n-2]=0;
		ans[n-1]=1;
	}
	if (a==2){
		ans[n-2]=1;
		ans[n-1]=0;
	}
	
	vector<int> vi;
	for (int i=0; i<n; i++)
		vi.push_back(i);
	
	for (int i=0; i<n; i++)
	{
		
		int c=ans[i];
		ans[i]=vi[c];
		
		if (i==n-1)
			continue;
		vi.erase(vi.begin()+c);
	}
        
	for (int i=0; i<n; i++)
			s.push_back(ans[i]+1+'0');
      
	return s;

        
    }
};
