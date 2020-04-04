#include<bits/stdc++.h>
#define ll long long
#define w(x) int x; cin>>x; while(x--)
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    ffast();
    w(t){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>=0)
                a[i] = 1;
            else
                a[i] = -1;
        }
        int dp[n];
        dp[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            if(a[i+1]+a[i]==0)
                dp[i] = dp[i+1] + 1;
            else
                dp[i] = 1;
        }
        for(int i=0;i<n;i++)
            cout<<dp[i]<<" ";
        cout<<"\n";
    }
}