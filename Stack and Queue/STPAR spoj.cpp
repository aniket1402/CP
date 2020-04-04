    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        while(cin>>n){
            if(n==0)
                break;
            stack<int> s;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            int cnt = 1;
            int i=0;
            for(i=0;i<n;i++){
                if(a[i]==cnt)
                    cnt++;
                else if(!s.empty() and s.top()==cnt){
                    i--;
                    s.pop();
                    cnt++;
                }
                else
                    s.push(a[i]);
            }
            while(!s.empty()){
                if(s.top()==cnt){
                    cnt++;
                    s.pop();
                }
                else
                    break;
            }
            if(cnt!=n+1)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
    } 