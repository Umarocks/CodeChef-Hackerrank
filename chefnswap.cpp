
https://www.codechef.com/SEPT20B/problems/CHFNSWAP/

#include <bits/stdc++.h>
using namespace std;
int flag=0;
unsigned long long int findRoots(int a, int b,unsigned long long int c) 
{       unsigned long long int answer;
     unsigned long long int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
         if((double)(-b + sqrt_val)/(2*a)>0){
             answer=(double)(-b + sqrt_val)/(2*a);
             return answer;
         }
         else if((double)(-b - sqrt_val)/(2*a)>0){
             answer=(double)(-b - sqrt_val)/(2*a);
             return answer;
         }
     } 
     else if (d == 0) 
     {      
         return answer=-(double)b / (2*a); 
     } 
     
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	 unsigned long long int n;
	 cin>>n;
	  unsigned long long int ans=0;
	  unsigned long long int pta=0,pta2=0;
	  unsigned long long int sum=(n*(n+1))/2;
	  unsigned long long int breakingpoint=findRoots(1,1,sum*-1);
	 if(sum/2==(breakingpoint*(breakingpoint+1))/2){
	     flag=1;
	 }
	 if(sum%2!=0){
	     ans=0;
	 }
	 else if(flag==0){
	     ans=(n-breakingpoint);
	     
	 }
	 else if(flag==1){
	     unsigned long long int x=breakingpoint;
	     pta=(x*(x-1))/2;//(n*n(n-1))/2
	     pta2=((n-x)*(n-x-1))/2;
	     ans=pta+pta2+(n-breakingpoint); 
	    
	 }
	  cout<<ans<<endl;
	  flag=0;
	}
	return 0;
}