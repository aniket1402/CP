#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<long,long>
#define ff first
#define ss second
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
        ll a[n];
        ll cnt = 0;
        vector<pll > v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%4==0)
                v.pb({4,i});
            else if(a[i]%2==0)
                v.pb({2,i});
        }
        ll j=0;
        if(v.size()==0){
            cout<<(n*(n+1))/2<<"\n";
            continue;
        }
        // for(int i=0;i<v.size();i++)
        //     cout<<v[i].ff<<" "<<v[i].ss<<"\n";
        ll i=0;
        for(i=0;i<n;i++){
            if(i==v[j].ss and j==v.size()-1){
                if(v[j].ff==4)
                    cnt += n - i;
                break;
            }
            else if(i==v[j].ss){
                if(v[j].ff==2)
                    cnt += n - v[j+1].ss;
                else
                    cnt += n - i;
                j++;
            }
            else{
                if(j==v.size()-1 and v[j].ff==2)
                    cnt += v[j].ss - i;
                else{
                    if(v[j].ff==2)
                        cnt += v[j].ss - i + n - v[j+1].ss;
                    else
                        cnt += n - i;
                }
            }
            // cout<<i<<" : "<<cnt<<"\n";
        }
        i++;
        while(i<n){
            cnt += n - i;
            i++;
        }
        cout<<cnt<<"\n";
    }
}