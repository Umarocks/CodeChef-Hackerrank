

https://www.hackerrank.com/challenges/game-of-thrones/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
string a="abcdefghijklmnopqrstuvwxyz";
int oddcnt=0,evencnt=0;
int l=s.length();
for(int i=0;i<26;i++)
{
  int c=0;
  for(int j=0;j<l;j++)
  {
    if(a[i]==s[j])
    c++;
  }
  if(c%2==0)
   evencnt++;
   else
   oddcnt++;
}
if(oddcnt<=1)
return "YES";
else if(oddcnt==2&&l%2==0)
return "YES";
else
return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
