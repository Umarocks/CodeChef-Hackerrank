https://www.codechef.com/SEPT20B/problems/COVID19B

#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=1;
	    int mininf=INT_MAX;
	    int maxinf=INT_MIN;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        int minele=arr[i];
	        int maxele=arr[i];
	        if(i==0){ 
                for(int j=i+1;j<n;j++){
                    if(arr[j]<arr[i]){
                        count++;
                    }
                }
	        }
	        else if(i==n-1){
                for(int j=0;j<i;j++){
                    if (arr[j]>arr[i]){
                        count++;
                    }
                }
	        }
	        else {
	            for(int j=i+1;j<n;j++){
                    if(minele>arr[j]){
                        minele=arr[j];
                    }
                }
                for(int j=0;j<i;j++){
                    if (arr[j]>minele){
                        count++;
                    }
                    if (arr[j]==minele&&arr[i]<arr[j]){
                        count++;
                    }
                    if(arr[j]>maxele){
                        maxele=arr[j];
                    }
                }
                for(int j=i+1;j<n;j++){
                    if(arr[j]<maxele){
                        count++;
                    }
                }
	        }
	        maxinf=max(count,maxinf);
	        mininf=min(count,mininf);
	        count=1;
	    }
	    cout<<mininf<<" "<<maxinf<<endl;
	}
	return 0;
}