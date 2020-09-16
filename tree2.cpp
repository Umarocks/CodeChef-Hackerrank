https://www.codechef.com/SEPT20B/problems/TREE2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int max=INT_MIN;
	    int zero=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==0){
	            zero++;
	        }
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[arr[i]]++;
	    }
	    int count=0;
	    for (auto& it : m) { 
            count++;
        } 
        if(zero>0){
            count--;
        }
        cout<<count<<endl;
	    
	}
	return 0;
}