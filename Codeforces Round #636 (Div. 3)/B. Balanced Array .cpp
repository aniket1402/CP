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
        int n;
        cin>>n;
        int a[n];
        ll e_sum=0,o_sum=0;
        if((n/2)%2==1){
            cout<<"NO\n";
            continue;
        }
        int x = 2;
        for(int i=0;i<n/2;i++){
            a[i] = x;
            x += 2;
            e_sum += a[i];
        }
        x = 1;
        for(int i=n/2;i<n-1;i++){
            a[i] = x;
            x += 2;
            o_sum += a[i];
        }
        a[n-1] = e_sum - o_sum;
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}