#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main() 
{
 string s1,s2,s3;
 string s0;
 cin>>s1>>s2>>s3;
 s0=s1+s2;
 sort(s0.begin(),s0.end());
 sort(s3.begin(),s3.end());
 for(int i=0;i<s0.length();i++){
     if(s0[i]==s3[i]){
         s3[i]=0;
     }
 }
 int ans=0;
 for(int i=0;i<s3.length();i++){
     if(s3[i]!=0){
         ans=0;
         break;
     }
     else{
         ans=1;
     }
 }
 if(s0.length()!=s3.length()){
     ans=0;
 }
 if(ans==0){
     cout<<"NO"<<endl;
 }
 else{
     cout<<"YES"<<endl;
 }
 
 
return 0;
   
}