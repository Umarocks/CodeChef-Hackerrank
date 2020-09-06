

https://www.codechef.com/AUG20B/problems/LINCHESS/

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int max=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(k%x==0&&x>max){
            max=x;
        }
    }
    cout<<max<<endl;
}
	return 0;
}