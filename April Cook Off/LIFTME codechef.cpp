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
        int n,q;
        cin>>n>>q;
        ll ans = 0;
        int prev_d = 0;
        while(q--){
            int f,d;
            cin>>f>>d;
            ans += abs(prev_d-f) + abs(d-f);
            prev_d = d;
        }
        cout<<ans<<"\n";
    }
}