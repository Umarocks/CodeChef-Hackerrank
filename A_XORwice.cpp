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
 int findX(int A, int B) 
{ 
    int j = 0, x = 0; 
    while (A || B) { 
        if ((A & 1) && (B & 1)) { 
          x += (1 << j); 
        } 
        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    return x; 
}
 
int main() 
{
 ll t;
 cin>>t;
 while(t--){
        ll a,b;
        cin>>a>>b;
        int x=findX(a,b);
        ll ans=(a ^ x) + (b ^ x);
        cout<<ans<<endl;
 }
 
 
 
 
return 0;
   
}