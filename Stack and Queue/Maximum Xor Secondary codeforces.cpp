#include<bits/stdc++.h>
#define ll long long
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    ffast();
    int n;
    cin>>n;
    ll s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    stack<ll> st;
    ll ans=INT_MIN,topp;
    st.push(s[0]);
    for(int i=1;i<n;i++){
        if(st.top()>s[i]){
            ans = max(ans, s[i]^st.top());
            st.push(s[i]);
        }
        else{
            while(!st.empty() and st.top()<s[i]){
                ans = max(ans, s[i]^st.top());
                st.pop();
            }
            if(!st.empty())
                ans = max(ans, s[i]^st.top());
            st.push(s[i]);
        }
    }
    while(st.size()>1){
        topp = st.top();
        st.pop();
        ans = max(ans, topp^st.top());
    }
    cout<<ans<<"\n";
}