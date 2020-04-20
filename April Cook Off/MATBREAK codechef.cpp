#include<bits/stdc++.h>
#define ll long long
#define modd 1000000007
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
ll power(ll x, ll y){
    ll res = 1;
    while(y){
        if(y&1)
            res = (res*x)%modd;
        x = (x*x)%modd;
        y >>= 1;
    }
    return res;
}
int main()
{
    ffast();
    w(t){
        ll n,a;
        cin>>n>>a;
        ll p,rem = 1, ans = 0;
        for(int i=0;i<n;i++){
            p = power(a,rem);
            rem += 2;
            a = (a*p)%modd;
            ans = (ans+p)%modd;
        }
        cout<<ans<<"\n";
    }
}