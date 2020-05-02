#include<bits/stdc++.h> 
using namespace std; 
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// Top Down
int profit(int *wines, int i, int j, int y, int dp[100][100]){
	// Base Case
	if(i>j)
		return 0;
	if(dp[i][j]!=0)
		return dp[i][j];
	// Recursive Case
	int op1 = wines[i]*y + profit(wines,i+1,j,y+1,dp);
	int op2 = wines[j]*y + profit(wines,i,j-1,y+1,dp);
	return dp[i][j] = max(op1,op2);
}
int main()
{
	c_p_c();
	int wines[] = {2,3,5,1,4};
	int dp[100][100] = {0};
	int n = sizeof(wines)/sizeof(int);
	int y=1;
	cout<<profit(wines,0,n-1,y,dp);
}