#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b,flag=0,ans;
        cin>>x>>y>>a>>b;
        if(2*a<=b)
            flag=1;
        if(x==y){
            if(flag)
                ans=2*a*x;
            else
                ans=b*x;
        }
        else if(x>y){
            if(flag)
                ans=(x+y)*a;
            else
                ans=(y*b)+((x-y)*a);
        }
        else{
            if(flag)
                ans=(x+y)*a;
            else
                ans=(x*b)+((y-x)*a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
