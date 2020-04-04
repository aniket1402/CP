#include<bits/stdc++.h>
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
        int n,s=0;
        cin>>n;
        bool a[n],flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(flag==0 and a[i]==1){
                s = i;
                flag = 1;
            }
        }
        int i=s+1;
        for(;i<n;i++){
            if(a[i]==1){
                if(i-s < 6)
                    break;
                s = i;
            }
        }
        if(i!=n)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}