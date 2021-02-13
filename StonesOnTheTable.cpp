#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    char a[n];
    cin>>a;
    for(int i=0;i<n-1;i++){
        if((a[i]=='R' && a[i+1]=='R') || (a[i]=='G' && a[i+1]=='G') || (a[i]=='B' && a[i+1]=='B'))
            count++;
    }
    cout<<count;
    return 0;
}