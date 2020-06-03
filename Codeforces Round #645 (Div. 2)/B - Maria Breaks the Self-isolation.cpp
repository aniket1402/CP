#include<bits/stdc++.h>
#define w(x) int x; cin>>x; while(x--)
using namespace std;
void ffast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    ffast();
    w(t){
        int n;
        cin>>n;
        multiset<int> ms;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ms.insert(x);
        }
        int i;
        auto it = ms.end();
        for(i=n;i>0;i--){
            it--;
            if(i>=(*it))
                break;
        }
        cout<<i+1<<"\n";
    }
}