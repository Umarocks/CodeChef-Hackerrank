
https://www.codechef.com/SEPT20B/problems/ADAMAT/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1][n+1];
	    for(int i=1;i<=n;i++){
	            for(int j=1;j<=n;j++){
	                cin>>arr[i][j];
	            }
	    }
	    long long int count=0;
	    
	    for(int i=1;i<=n;i++){
	            for(int j=n;j>0;j--){
	                long long int k=((i)-1)*n+j;
	                if(arr[i][j]!=k){
	                    int x=j;
	                    for(int k=1;k<=x;k++){
                            for(int l=k+1;l<=x;l++){
                                swap(arr[k][l],arr[l][k]);
                            }
                        }
	                    count++;
	                }
	            }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}