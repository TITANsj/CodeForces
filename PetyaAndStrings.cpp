#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    char a[101],b[101];
    cin>>a>>b;
    int l=strlen(a);
    for(int i=0;i<l;i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    for(int i=0;i<l;i++){
        if(a[i]<b[i]){
            cout<<"-1";
            break;
        }
        else if(a[i]>b[i]){
            cout<<"1";
            break;
        }
        if(i==l-1)
            cout<<"0";
    }
    return 0;
}