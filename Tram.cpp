#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a,b,c=0,max=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c=(c-a)+b;
        if(c>max)
            max=c;
    }
    cout<<max;
    return 0;
}