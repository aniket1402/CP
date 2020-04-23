#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100];
ll ways(int n){
	if(n<=2)
		return n;
	if(dp[n]!=-1)
		return dp[n];
	dp[n] = ways(n-1) + (n-1)*ways(n-2);
	return dp[n];
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		memset(dp,-1,sizeof dp);
		cout<<ways(n)<<"\n";
	}
}