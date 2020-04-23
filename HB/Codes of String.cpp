// Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, …. z=26. Write a recursive function (return type Arraylist) to print all possible codes for the string. E.g. for “1123” possible codes are aabc, kbc, alc, aaw, kw.

#include<bits/stdc++.h>
using namespace std;

void codes(int i, string s, int n, int j, string out, string &a){
	if(i==n){
		a += out;
		a += ", ";
		return;
	}

	out += (s[i]-'0')+96;
	codes(i+1,s,n,j,out,a);
	if(i+2<=n){
		int temp = (s[i]-'0')*10+(s[i+1]-'0');
		if(temp<=26){
		    out.erase(out.length()-1,out.length());
			out += temp+96;
			codes(i+2,s,n,j,out,a);
		}
	}
	return ;
}
int main()
{
	string s;
	cin>>s;
	int n = s.length();
	string a = "[";
	codes(0,s,n,0,"",a);
	a.erase(a.length()-2,a.length());
	a += "]";
	cout<<a;
}