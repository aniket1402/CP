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
int prec(char ch){
    switch(ch){
        case '^':
            return 5;
        case '/':
            return 4;
        case '*':
            return 3;
        case '-':
            return 2;
        case '+':
            return 1;
    }
}
int main()
{
    ffast();
    w(t){
        string s;
        cin>>s;
        stack<char> st;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                continue;
            }
            if(s[i]==')'){
                while(st.top()!='('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                continue;
            }
            if(s[i]=='^' or s[i]=='/' or s[i]=='*' or s[i]=='-' or s[i]=='+'){
                if(st.top()=='(' or st.empty())
                    st.push(s[i]);
                else{
                    while(prec(st.top())>prec(s[i])){
                        ans += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
                continue;
            }
            ans += s[i];
        }
        cout<<ans<<"\n";
    }
}