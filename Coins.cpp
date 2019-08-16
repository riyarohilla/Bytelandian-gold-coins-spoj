#include <bits/stdc++.h>
using namespace std;
map<long long,long long> dp;
long long int cal(long long int n)
{
	if(n==0)
	return 0;
	else if(!dp[n])
	{
			dp[n]=max(n,cal(n/2)+cal(n/3)+cal(n/4));
		
	}
		return dp[n];
}
		
int main() {
	
	// your code here
	long long int i,j,n;
	while(cin>>n)
	{
		cout<<cal(n)<<endl;
	
	}
	return 0;
}
