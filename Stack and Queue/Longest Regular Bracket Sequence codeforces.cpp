#include<bits/stdc++.h>
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
    string s;
    cin>>s;
    stack<pair<char,int> > sp;
    int len = s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='(')
            sp.push({'(',i});
        else{
            if(sp.empty() or sp.top().ff==')')
                sp.push({')',i});
            else
                sp.pop();
        }
    }
    int ans = INT_MIN;
    int num = 1;
    int prev = len - 1;
    if(sp.empty())
        ans = len;
    else{
        while(!sp.empty()){
            int x = sp.top().ss + 1;
            sp.pop();
            int cnt = prev - x + 1;
            prev = x - 2;
            if(cnt==0)
                continue;
            if(ans<=cnt){
                if(ans==cnt)
                    num++;
                else{
                    ans = cnt;
                    num = 1;
                }
            }
        }
    }
    if(ans==INT_MIN)
        cout<<"0 1\n";
    else
        cout<<ans<<" "<<num<<"\n";
}