#include<bits/stdc++.h>
#define ll long long
#define w(x) int x; cin>>x; while(x--)
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    ffast();
    w(t){
        ll n;
        cin>>n;
        ll ans=0,mul=8,k;
        k = (n+1)/2;
        for(int i=1;i<k;i++){
            ans += mul*i;
            mul += 8;
        }
        cout<<ans<<"\n";
    }
}