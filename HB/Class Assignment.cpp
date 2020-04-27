#include<bits/stdc++.h>
using namespace std;
int numbers(int n,int len,string s,int cnt){
	if(len==n){
		cnt++;
		return cnt;
	}

	int a = numbers(n,len+1,s+'a',cnt);
	int b = 0;
	if(s[s.length()-1]!='b')
		b = numbers(n,len+1,s+'b',cnt);
	
	return a+b;
}
int main()
{
	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
		int n;
		cin>>n;
		cout<<"#"<<t<<" : "<<numbers(n,0,"",0)<<"\n";
	}
}