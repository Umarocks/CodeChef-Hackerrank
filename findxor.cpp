#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int t;
  cin>>t;
  while(t--){
      long long int n;
      cin>>n;
      long long int k;
      k=pow(2,20);
      cout<<1<<" "<<k<<endl;
      fflush(stdout);
      long long int computerans;
      cin>>computerans;
      long long int sum;
      sum=computerans-(n*k);
      long long int ans=0;
      if(sum%2!=0){
          ans++;
      }
      for(long long int i=1;i<20;i++){
          long long int tempK=pow(2,i);
          cout<<1<<" "<<tempK<<endl;
          fflush(stdout);
          cin>>computerans;
          if(computerans==-1){
            break;
          }
          long long int ans2;
          ans2=((n*tempK)+sum-computerans)/(tempK*2);
          if(ans2%2!=0){
              ans+=tempK;
          }
      }
      cout<<2<<" "<<ans<<endl;
      fflush(stdout);
      cin>>computerans;
      if(computerans==-1){
        break;
      }

  }
  return 0;
}