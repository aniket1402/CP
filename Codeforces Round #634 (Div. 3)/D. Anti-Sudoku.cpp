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
        string s[9];
        for(int i=0;i<9;i++)
            cin>>s[i];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(s[i][j]=='1')
                    s[i][j] = '2';
            }
        }
        for(int i=0;i<9;i++)
            cout<<s[i]<<"\n";
    }
}