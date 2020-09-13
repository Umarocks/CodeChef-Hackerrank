https://www.hackerrank.com/challenges/find-digits/problem

#include <bits/stdc++.h>
#include<iostream>
#include <sstream>
#include<string>
using namespace std;

int main(){
int n;
cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        string str1;
        long long int length=str.length();
        long long int arr[length];
        for(int j=0;j<length;j++){
            str1=str[j];
            arr[j]=stoi(str1);//dekho zra
        }
        long long int number=stoi(str);
        
        long long int count=0;
        for(int j=0;j<=length;j++){
           
           if(arr[j]!=0){
                if(number%arr[j]==0){
                count++;
                } 
           }
        }
        cout<<count<<endl;
        
        

    }

return 0;

}



    
