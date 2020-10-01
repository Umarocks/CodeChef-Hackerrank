#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fastio;
    ll T;
    cin >> T;
    while(T--)
    {
        ll N;
        cin >> N;
        ll A[N];
        for(ll i=0;i<N;i++) cin >> A[i];
        ll flag=1;
        for(ll i=0;i<N;i++)
        {
            if(i%2==0)
            {
                if(A[i]==1 || A[i]==i+1 || (i+1)%A[i]==0) continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if((i+1)%A[i]==0 || A[i]==i+1 || A[i]==1) continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
