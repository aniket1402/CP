#include<bits/stdc++.h>
#define ull unsigned long long
#define w(x) int x; cin>>x; while(x--)
using namespace std;
int main()
{
    w(t){
        int n;
        ull s;
        cin>>n>>s;
        ull p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        ull p1 = INT_MAX,p2 = INT_MAX;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)
                p1 = min(p1,p[i]);
            else
                p2 = min(p2,p[i]);
        }
        s += p1+p2;
        if(s<=100)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}