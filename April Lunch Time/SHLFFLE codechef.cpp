#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pll pair<ll,ll>
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
bool comp(pll a, pll b){
    return a.ss<b.ss;
}
int main()
{
    ffast();
    w(t){
        ll k,n;
        cin>>n>>k;
        ll a[n];
        bool flag = 0;
        vector<pll > v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back({i+1,a[i]});
        }
        sort(v.begin(),v.end(),comp);
        ll i=0;
        for(auto it:v){
            ll a = it.ff;
            ll temp = abs(a-i-1);
            if(temp%k!=0)
                flag=1;
            i++;
        }
        if(flag==1)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
}