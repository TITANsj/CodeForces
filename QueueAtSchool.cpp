#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    int n,t;
    cin>>n>>t;
    char a[n],temp;
    cin>>a;
    for(int j=0;j<t;j++){
        int i=0;
        while(i<n-1){
            if(a[i]=='B' && a[i+1]=='G'){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                i=i+2;
            }
            else
                i=i+1;
        }
    }
    cout<<a<<endl;
    return 0;
}