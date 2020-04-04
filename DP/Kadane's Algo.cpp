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
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll max_so_far = a[0];
        ll curr_max = a[0];
        for(int i=1;i<n;i++){
            curr_max = max(a[i], curr_max+a[i]);
            max_so_far = max(curr_max, max_so_far);
        }
        cout<<max_so_far<<"\n";
    }
}