#include<bits/stdc++.h>
using namespace std;
int dp[26][26];
int numbers(int n){
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2;i<=n;i++){
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    return dp[n][0]+dp[n][1];
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        memset(dp,-1,sizeof dp);
        cout<<"#"<<t<<" : "<<numbers(n)<<"\n";
    }
}