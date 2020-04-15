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
        string s="";
        if(n==1){
            s += "1\n";
            s += "1 1\n";
        }
        else{
            s += to_string(n/2) + "\n";
            if(n%2==0){
                for(int i=1;i<n;i+=2)
                    s += "2 " + to_string(i) + " " + to_string(i+1) + "\n";
            }
            else{
                s += "3 1 2 3\n";
                for(int i=4;i<n;i+=2)
                    s += "2 " + to_string(i) + " " + to_string(i+1) + "\n";
            }
        }
        cout<<s<<"\n";
    }
}