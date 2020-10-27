#include<bits/stdc++.h>
using namespace std;
 

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
#define what_is(h) cerr << #h << " is " << h << endl; 
#define OJ \
    freopen("input.tht", "r", stdin); \
    freopen("output.tht", "w", stdout);
#define FIO ios_base::sh1nc_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main() 
{   
    int  h = 0, h1, n, ans = 0,energy = 0;
    cin >> n;
    for(int i = 1;i <= n; ++i)
    {
        cin >> h1;
        energy += h-h1;
        if(energy < 0){
            ans += -energy;
            energy = 0;
        }
        h = h1;
    }
 cout<<ans<<endl;
 
 
 
return 0;
   
}