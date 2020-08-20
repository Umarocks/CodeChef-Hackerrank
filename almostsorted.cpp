#include <bits/stdc++.h>
using namespace std;

void almostSorted() {
int n;
cin>>n;
int sorted[n];
int arr[n];
for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sorted[i]=arr[i];
    }
int l=n;

for(int i=0;i<l;i++){
    sorted[i]=arr[i];
}
sort(sorted,sorted+n);
vector<int>miss;
for(int i=0;i<l;i++){
    if(arr[i]!=sorted[i]){
        miss.push_back(i);
    }
}
if(miss.size()==0){
    cout<<"yes"<<endl;
}
else if(miss.size()==2){
    cout<<"yes"<<endl;
    cout<<"swap "<<miss[0]+1<<" "<<miss[1]+1<<endl;
}
else{
    bool ok=true;
    int first=miss[0];
    int last=miss[miss.size()-1];
    for(int i=first;i<last;i++){
        if(arr[i+1]>arr[i]){
            ok=false;
            break;
        }
    }
    if(ok==true){
        cout<<"yes\n";
            cout<<"reverse "<<first+1<<" "<<last+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
}

int main()
{
        almostSorted();
    return 0;
}
