#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        ll ans = 0;
        if(s[0]!='<'){
            cout<<"0\n";
            continue;
        }
        for(int i=0;i<s.length();i++){
            if(i!=0 and st.empty() and s[i]!='<')
                break;
            if(s[i]=='<')
                st.push(s[i]);
            else
                st.pop();
            if(st.empty())
                ans = i+1;
        }
        cout<<ans<<"\n";
    }
}