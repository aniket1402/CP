#include<bits/stdc++.h>
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    ffast();
    int t=1;
    string s;
    while(cin>>s){
        if(s[0]=='-')
            break;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty() or st.top()=='}' or s[i]=='{')
                st.push(s[i]);
            else
                st.pop();
        }
        if(st.empty()){
            cout<<t<<". 0\n";
            t++;
            continue;
        }
        int ans = 0;
        while(!st.empty()){
            char topp = st.top();
            st.pop();
            if(topp==st.top())
                ans++;
            else
                ans += 2;
            st.pop();
        }
        cout<<t<<". "<<ans<<"\n";
        t++;
    }
}

// }}}}{{{{
// }}}{{{
// {}{}{}
// {{{}
// ---