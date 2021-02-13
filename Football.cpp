#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int l=s.size(),count_1=0,count_0=0,k=0;
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            count_0++;
            count_1=0;
        }
        else{
            count_1++;
            count_0=0;
        }
        if(count_1==7 || count_0==7){
            k=1;
            break;
        }
    }
    if(k==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}