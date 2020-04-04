#include<bits/stdc++.h>
#define ll long long
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
ll maxArea(ll hist[], ll n){ 
	stack<ll> s; 
	ll area = 0;
	ll topp;
	ll top_area;
	ll i = 0; 
	while(i<n){ 
		if(s.empty() or hist[s.top()]<=hist[i]) 
			s.push(i++);
		else{ 
			topp = s.top(); 
			s.pop();
			if(s.empty())
    		    top_area = hist[topp]*i;
    		else
    		    top_area = hist[topp]*(i-s.top()-1);
			if(area<top_area) 
				area = top_area; 
		} 
	}
	while(!s.empty()){ 
		topp = s.top(); 
		s.pop(); 
		if(s.empty())
		    top_area = hist[topp]*i;
		else
		    top_area = hist[topp]*(i-s.top()-1);
		if(area<top_area) 
			area = top_area; 
	} 
	return area; 
}
int main()
{
    ffast();
    ll n;
    while(cin>>n){
        if(n==0)
            break;
        ll hist[n];
        for(ll i=0;i<n;i++)
            cin>>hist[i];
        cout<<maxArea(hist,n)<<"\n";
    }
}