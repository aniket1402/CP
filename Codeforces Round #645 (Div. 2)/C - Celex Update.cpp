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
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans = (x2-x1)*(y2-y1)+1;
        cout<<ans<<"\n";
    }
}