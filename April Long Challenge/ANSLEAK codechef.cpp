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
        int n,m,k;
        cin>>n>>m>>k;
        srand ( time(NULL) );
        int a[n][k];
        for(int i=0;i<n;i++)
            for(int j=0;j<k;j++)
                cin>>a[i][j];
        int ans[n];
        for(int i=0;i<n;i++)
            ans[i] = rand()%m + 1;
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}