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
        int n,a,b;
        cin>>n>>a>>b;
        int temp = b;
        char c[n+1];
        for(int i=0;i<n;){
            b = temp;
            int x = 97;
            for(int j=0;j<a;j++){
                if(b>0 and i<n){
                    c[i] = x;
                    x++;
                    b--;
                    i++;
                }
            }
        }
        c[n] = '\0';
        for(int i=0;i<n;i++)
            cout<<c[i]<<"";
        cout<<"\n";
    }
}