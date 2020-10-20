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
  vector< pair<int,int> >v;
 for(int i=0;i<n;i++){
     int a,b;
     cin>>a>>b;
     v.PB(make_pair(a,b));
 }
 
 int alex=0;


 sort(all(v));
 for(int i=0;i<n-1;i++){
     if(v[i].first<v[i+1].first&&v[i].second>v[i+1].second){
         alex=1;
         break;
     }
 }
 if(alex==1){
     cout<<"Happy Alex"<<endl;
 }
 else{
     cout<<"Poor Alex"<<endl;
 }
 
 
 
return 0;
   
}