#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int count =0;
    int a,b,c,d;
    if(arr[0][1]==arr[1][0]&&arr[n-1][n-2]==arr[n-2][n-1]){
        if(arr[0][1]!=arr[n-1][n-2]){
            count=0;
        }
        else{
            count=2;
            a=1;
            b=2;
            c=2;
            d=1;
        }
    }
    else if(arr[0][1]!=arr[1][0]&&arr[n-1][n-2]==arr[n-2][n-1]){
        if(arr[0][1]==arr[n-1][n-2]){
            count=1;
            a=1;
            b=2;
        }
        else{
            count=1;
            a=2;
            b=1;
        }
    }
    else if(arr[0][1]==arr[1][0]&&arr[n-1][n-2]!=arr[n-2][n-1]){
        if(arr[0][1]==arr[n-1][n-2]){
            count=1;
            a=n;
            b=n-1;
        }
        else{
            count=1;
            a=n-1;
            b=n;
        }
    }
    else{
        if(arr[0][1]==arr[n-1][n-2]){
            count=2;
            a=2;
            b=1;
            c=n;
            d=n-1;
        }
        else if(arr[0][1]==arr[n-2][n-1]){
            count=2;
            a=2;
            b=1;
            c=n-1;
            d=n;
        }
        else if(arr[1][0]==arr[n-1][n-2]){
            count=2;
            a=1;
            b=2;
            c=n;
            d=n-1;
        }
        else{
            count=2;
            a=1;
            b=2;
            c=n-1;
            d=n;
        }

    }
    cout<<count<<endl;
    if(count==1){
        cout<<a<<" "<<b<<endl;
    }
    if(count==2){
        cout<<a<<" "<<b<<endl;
        cout<<c<<" "<<d<<endl;
    }
 }
return 0;
   
}