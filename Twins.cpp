#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=sum/2;
    sort(a,a+n);
    int count=0,ans=0;
    for(int i=n-1;i>=0;i--){
        ans=ans+a[i];
        count++;
        if(ans>sum)
            break;
    }
    cout<<count;
    return 0;
}