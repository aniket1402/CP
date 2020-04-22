// You are provided an integers N. You need to count all possible distinct binary strings of length N such that there are no consecutive 1’s.

#include<bits/stdc++.h>
using namespace std;
int dp[101][2];
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		dp[1][0] = dp[1][1] = 1;
		for(int i=2;i<=n;i++){
		    dp[i][1] = dp[i-1][0];
			dp[i][0] = dp[i-1][0] + dp[i-1][1];
		}
		cout<<dp[n][0]+dp[n][1]<<"\n";
	}
}