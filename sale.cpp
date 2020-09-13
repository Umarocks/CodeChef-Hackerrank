https://codeforces.com/contest/34/problem/B

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int n,m;
    cin>>n>>m;
    long long  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int i=0;
    long long int count=0;
    long long int ans=0;
    while(arr[i]<0&&i<n&&count<m){
        ans+=abs(arr[i]);
        i++;
        count++;
    }
    cout<<ans<<endl;
}