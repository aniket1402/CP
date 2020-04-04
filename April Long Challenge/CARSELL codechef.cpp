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
bool comp(ll x, ll y){
    return x>y;
}
int main()
{
    ffast();
    w(t){
        int n;
        cin>>n;
        ll p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        sort(p,p+n,comp);
        ll sub=0, ans=0;
        for(int i=0;i<n;i++){
            if(p[i]-sub > 0)
                ans = (ans + p[i] - sub)%modd;
            else
                break;
            sub += 1;
        }
        cout<<ans%modd<<"\n";
    }
}