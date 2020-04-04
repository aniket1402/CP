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
        case '*':
            return 2;
        case '+':
            return 1;
    }
}
string postfix(string s){
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
        if(s[i]=='*' or s[i]=='+'){
            if(st.empty() or st.top()=='(')
                st.push(s[i]);
            else{
                while(!st.empty() and st.top()!='(' and (prec(st.top())>prec(s[i]))){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            continue;
        }
        ans += s[i];
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}
int val(char ch){
    switch(ch){
        case 'C':
            return 12;
        case 'H':
            return 1;
        case 'O':
            return 16;
        default:
            return (ch - '0');
    }
}
int main()
{
    ffast();
    string in,s="";
    cin>>in;
    for(int i=0;i<in.length();i++){
        if(in[i]>='1' and in[i]<='9'){
            s += '*';
            s += in[i];
        }
        else if(in[i]!=')' and in[i-1]!='(' and i!=0){
            s += '+';
            s += in[i];
        }
        else
            s += in[i];
    }
    string post = postfix(s);
    stack<int> st;
    for(int i=0;i<post.length();i++){
        if(post[i]=='*' or post[i]=='+'){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            switch(post[i]){
                case '*':
                    st.push(x*y);
                    break;
                case '+':
                    st.push(x+y);
                    break;
            }
        }
        else{
            int x = val(post[i]);
            st.push(x);
        }
    }
    cout<<st.top()<<"\n";
}