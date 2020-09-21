
https://www.codechef.com/SEPT20B/problems/CRDGAME2/

#include <bits/stdc++.h>
using namespace std;
 long long power( long long x, long long int y, long long int p) { 
     long long res = 1; 

    x = x % p; 
  
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p; 
  
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
}
 long long modInverse( long long n, long long int p){ 
    return power(n, p - 2, p); 
} 
 long long nCrModPFermat( long long n, long long int r, long long int p) { 
   
    if (r == 0) 
        return 1; 
  
     long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 
int main() {
	 long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	     long long int maxfreq=0;
	     long long int max=INT_MIN;
	     long long int ans=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	            maxfreq=1;
	        }
	        else if(arr[i]==max){
	            maxfreq++;
	        }
	    }
	    if(maxfreq%2!=0){
	            ans=(power(2,n,1000000007))%1000000007;
	            ans=(ans+1000000007)%1000000007;
	        }
	        else if(maxfreq==n){//shayad agar max == n then 2^n - maxC(max/2)
            	        ans=power(2,n,1000000007)-(nCrModPFermat(maxfreq,maxfreq/2,1000000007))%1000000007;
            	        ans=(ans+1000000007)%1000000007;
	             }
	        else{
    	            ans=(power(2,n,1000000007)-(nCrModPFermat(maxfreq,maxfreq/2,1000000007)*power(2,n-maxfreq,1000000007)))%1000000007;
    	            ans=(ans+1000000007)%1000000007;
	        }
        cout<<ans<<endl;
	}
	return 0;
}