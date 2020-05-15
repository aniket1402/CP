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
        ll n,m;
        cin>>n>>m;
        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<m<<"\n";
        else
            cout<<(2*m)<<"\n";
    }
}