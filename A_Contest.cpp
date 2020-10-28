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
{   ll m,v,tm,tv;
cin>>m>>v>>tm>>tv;
ll ansm,ansv,finans;
ansm=max((3*m)/10,m-((m/250)*tm));
ansv=max((3*v)/10,v-((v/250)*tv));
if(ansm>ansv){
    cout<<"Misha"<<endl;
}
else if( ansv>ansm){
    cout<<"Vasya"<<endl;
}
else{
    cout<<"Tie"<<endl;
}
 
 
 
 
 
return 0;
   
}