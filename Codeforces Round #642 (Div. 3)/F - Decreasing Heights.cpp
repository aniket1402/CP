#include<bits/stdc++.h>
#define ll long long
#define INT_MAX 1e18
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
        ll a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        ll a00 = a[0][0];
        ll ans = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // take every element of the array as fixed
                // if a[i][j] is fixed, then a[0][0] should be a[i][j]-i-j
                // bcz that much height is required to reach i,j from 0,0
                // 
                ll req = a[i][j] - i - j;
                if(a00<req){
                    // bcz in prev cells we can only increase the height
                    continue;
                }
                a[0][0] = req;
                ll op[n][m];
                for(int x=0;x<n;x++){
                    for(int y=0;y<m;y++)
                        op[x][y] = INT_MAX;
                }
                op[0][0] = a00 - req;
                for(int x=0;x<n;x++){
                    for(int y=0;y<m;y++){
                        // height required for the current cell
                        ll req = a[0][0] + x + y;
                        if(req>a[x][y]){
                            // bcz we can only decrease the heights
                            continue;
                        }
                        if(x>0)
                            op[x][y] = min(op[x][y],op[x-1][y]+a[x][y]-req);
                        if(y>0)
                            op[x][y] = min(op[x][y],op[x][y-1]+a[x][y]-req);
                    }
                }
                ans = min(ans,op[n-1][m-1]);
            }
        }
        cout<<ans<<"\n";
    }
}