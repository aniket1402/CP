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
bool factors(ll n, ll k){
    ll cnt=0;
    while(n%2 == 0){
        cnt++;
        n /= 2;
    }
    if(cnt>=k)
        return 1;
    for (int i=3;i*i<=n;i+=2){
        while(n%i == 0){
            n = n/i;
            cnt++;
            if(cnt>=k)
                return 1;
        }
    }
    if(n>2)
        cnt++;
    if(cnt<k)
        return 0;
    else
        return 1;
}
bool solve(ll x, ll k){
    if(k==1 and x>=2)
        return 1;
    if(k>log2(x))
        return 0;
    if(factors(x,k)==1)
        return 1;
    return 0;
}
int main()
{
    ffast();
    w(t){
        ll x,k;
        cin>>x>>k;
        cout<<solve(x,k)<<"\n";
    }
}