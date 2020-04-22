#include<bits/stdc++.h>
#define modd 1000000007
using namespace std;
int dp[100001];
int ways(int n, int m){
	if(n<m)
		return 1;
	if(n==m)
		return 2;
	if(dp[n]!=-1)
		return dp[n];
	dp[n-1] = ways(n-1,m)%modd;
	dp[n-m] = ways(n-m,m)%modd;
	return (dp[n-1]+dp[n-m])%modd;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		memset(dp,-1,sizeof dp);
		cout<<ways(n,m)<<"\n";
	}
}