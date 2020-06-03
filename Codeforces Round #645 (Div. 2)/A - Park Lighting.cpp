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
        int n,m;
        cin>>n>>m;
        cout<<(n*(m/2) + (n/2)*(m%2) + (n%2)*(m%2))<<"\n";
    }
}