#include<bits/stdc++.h>
#define ll long long
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
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<k;i++){
            if(a[i]<b[n-i-1])
                a[i] = b[n-i-1];
        }
        ll sum = 0;
        for(int i=0;i<n;i++)
            sum += a[i];
        cout<<sum<<"\n";
    }
}