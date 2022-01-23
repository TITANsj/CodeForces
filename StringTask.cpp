#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    char a[101];
    cin>>a;
    int l=strlen(a);
    for(int i=0;i<l;++i){
        a[i]=tolower(a[i]);
        if(a[i]=='a' || a[i]=='o' || a[i]=='y' || a[i]=='e' || a[i]=='u' || a[i]=='i')
            continue;
        else
            cout<<"."<<a[i];
    }
    return 0;
}