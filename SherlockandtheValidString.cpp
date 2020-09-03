

https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
int arr[26]={0};
for(int i=0;i<=s.length();i++){
    int j;
    j=s[i]-'a';
    arr[j]++;
}
int count =0;
int min=INT_MAX;
for(int i=0;i<26;i++){
    if(arr[i]==1&&count==0){
        arr[i]=0;
        count++;
    }
    if(arr[i]<min&&arr[i]!=0){
        min=arr[i];
    }
}
int flag=0;
for(int i=0;i<26;i++){
    if(arr[i]>min){
            if(abs(arr[i]-min)>1){
                flag=1;
            }
            if(abs(arr[i]-min)==1){
                count++;
            }
    }
}
if(flag==1){
return "NO";
}
else if(count>1){
    return "NO";
}
else return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
