--LOSTWKND--
MAY LUNCHTIME 2020 CODECHEF

https://www.codechef.com/problems/LOSTWKND

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[5];
	    int count=0;
	    for(int i=0;i<5;i++){
	        cin>>arr[i];
	        count+=arr[i];
	    }
	    int p;
	    cin>>p;
	    count=count*p;
	    if(count>5*24){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	   
	}
	return 0;
}
