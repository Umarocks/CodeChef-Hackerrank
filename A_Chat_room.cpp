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
 string s;
 cin>>s;
 string s1="hello";
 int flag=0;
 int j=0;
 string s3;
 for(int i=0;i<s.length();i++){
     if(s[i]!=s1[j]){
         s[i]='0';
     }
     else{
         j++;
         s3+=s[i];
     }
 }
 for(int i=0;i<5;i++){
    if(s3[i]!=s1[i]){
        flag=1;
        break;
    }   
 }
 if(s3.length()!=5){
     flag=1;
 }
 if(flag==0){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
return 0;
   
}