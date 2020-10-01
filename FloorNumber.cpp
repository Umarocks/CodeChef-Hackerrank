https://codeforces.com/contest/1426/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int count =1;
	    int ans=0;
	    if(n-2<=0){
	        ans=1;
	    }
	    else{
	        n=n-2;
	        count+=n/x;
	        if(n%x!=0){
	            count++;
	        }
	    }
	    ans=count;
	    cout<<ans<<endl;
	}
	
	return 0;
}