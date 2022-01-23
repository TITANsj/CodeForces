#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    char H[1001];
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
    cin>>H;
    int n=strlen(H);
    if(n>10)
        cout<<H[0]<<n-2<<H[n-1]<<endl;
    else
        cout<<H<<endl;
    }
    return 0;
}