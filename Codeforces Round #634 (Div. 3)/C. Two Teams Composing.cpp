#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
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
        ll n;
        cin>>n;
        ll a[n];
        unordered_map<int,int> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        ll dis = INT_MIN;
        for(auto it=m.begin();it!=m.end();it++){
            if(dis<it->ss){
                dis = it->ss;
            }
        }
        if(m.size()>dis)
            cout<<dis<<"\n";
        else if(m.size()==dis)
            cout<<dis-1<<"\n";
        else
            cout<<m.size()<<"\n";
    }
}