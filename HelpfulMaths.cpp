#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char s[101];
    cin>>s;
    int l=strlen(s);
    for(int i=0;i<l;i+=2){
        for(int j=0;j<l-i-2;j+=2){
            if(s[j]>s[j+2]){
                int temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    cout<<s;
    return 0;
}