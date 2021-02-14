#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char a[101];
    int b[26]{0};
    cin>>a;
    int l=strlen(a),count=0;
    for(int i=0;i<l;i++)
        b[(int (a[i]))-97]++;
    for(int i=0;i<26;i++){
        if(b[i]!=0)
            count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}