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
        ll a[n];
        vector<ll> v;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll p_max=INT_MIN,n_max=INT_MIN;
        int i=0;
        ll sum = 0;
        while(i<n){
            while(i<n and a[i]>0){
                p_max = max(p_max,a[i]);
                n_max = INT_MIN;
                i++;
            }
            if(p_max!=INT_MIN)
                sum += p_max;
            while(i<n and a[i]<0){
                n_max = max(n_max,a[i]);
                p_max = INT_MIN;
                i++;
            }
            if(n_max!=INT_MIN)
                sum += n_max;
        }
        cout<<sum<<"\n";
    }
}