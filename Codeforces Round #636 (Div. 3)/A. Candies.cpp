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
        ll n;
        cin>>n;
        ll p=3,k=2;
        while(n%p!=0){
            p += (1<<k);
            k++;
        }
        cout<<n/p<<"\n";
    }
}