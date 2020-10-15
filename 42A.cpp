//https://codeforces.com/problemset/problem/43/A

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
 ll n;
 cin>>n;
 ll team1=0,team2=0;
 string s1;
 cin>>s1;

 team1++;
 string s2;
 int flag=0;
for(int i=1;i<n;i++){
     string s3;
     cin>>s3;
     if(s3==s1){
         team1++;
     }
     else{
         s2=s3;
         team2++;
     }
 }
 if(team1>team2){
     cout<<s1<<endl;
 }
 else{
     cout<<s2<<endl;
 } 
 
return 0;
   
}