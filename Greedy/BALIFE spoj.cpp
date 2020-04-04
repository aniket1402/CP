#include<bits/stdc++.h>
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
    int n;
    while(cin>>n){
        if(n==-1)
            break;
        int a[n];
        int prefix[n+1];
        prefix[0] = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            prefix[i+1] = prefix[i] + a[i];
        }
        if(prefix[n]%n!=0){
            cout<<"-1\n";
            continue;
        }
        int val = prefix[n]/n;
        int maxx = INT_MIN;
        for(int i=1;i<=n;i++){
            prefix[i] = abs(prefix[i] - i*val);
            maxx = max(maxx,prefix[i]);
        }
        cout<<maxx<<"\n";
    }
}