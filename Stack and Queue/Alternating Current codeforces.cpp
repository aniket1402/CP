#include<bits/stdc++.h>
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
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty() or st.top()!=s[i])
            st.push(s[i]);
        else
            st.pop();
    }
    if(st.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";
}