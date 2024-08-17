#include<bits/stdc++.h>
using namespace std;
int l,c,check[20];
char ch[20],arr[20];
void f(int idx,int b){
    if(idx==l){
        int cnt1=0,cnt2=0;
        for(int i=1;i<=l;i++){
            if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u') cnt1++;
            else cnt2++;
        }
        if(cnt1>=1&&cnt2>=2){
            for(int i=1;i<=l;i++) cout<<arr[i];
            cout<<'\n';
        }
        return;
    }
    for(int i=b+1;i<=c;i++){
        if(check[i]==0){
            arr[idx+1]=ch[i];
            f(idx+1,i);
        }
    }
}
int main(){
    cin>>l>>c;
    for(int i=1;i<=c;i++) cin>>ch[i];
    sort(ch+1,ch+c+1);
    f(0,0);
    return 0;
}