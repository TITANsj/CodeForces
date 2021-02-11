#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    char a[n];
    int b[4]{0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]-65]++;
    }
 
    if(b[0]>b[3])
        cout<<"Anton";
    else if(b[0]<b[3])
        cout<<"Danik";
    else
        cout<<"Friendship";
 
    return 0;
}