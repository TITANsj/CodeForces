#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    signed int a,b,c,x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}