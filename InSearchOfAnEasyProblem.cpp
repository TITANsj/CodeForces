#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[2]{0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
 
    if(b[1]>=1)
        cout<<"HARD";
    else
        cout<<"EASY";
 
    return 0;
}