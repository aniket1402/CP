#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
#define w(x) int x; cin>>x; while(x--)
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
struct cmp{
    bool operator() (const pii &a,const pii &b) const{
        int lenA = a.ss - a.ff + 1;
        int lenB = b.ss - b.ff + 1;
        if(lenA==lenB)
            return a.ff < b.ff;
        return lenA > lenB;
    }
};
int main()
{
    ffast();
    w(t){
        int n;
        cin>>n;
        int a[n];
        set<pii,cmp> s;
        s.insert({0,n-1});
        for(int i=1;i<=n;i++){
            pii temp = *s.begin();
            s.erase(s.begin());
            int index = (temp.ff + temp.ss)/2;
            a[index] = i;
            if(temp.ff < index)
                s.insert({temp.ff,index-1});
            if(index < temp.ss)
                s.insert({index+1,temp.ss});
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}