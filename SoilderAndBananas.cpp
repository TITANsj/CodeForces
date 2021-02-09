#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long a,b,c,d,e=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++){
        d=i*a;
        e=e+d;
    }
    if(b>=e)
        cout<<"0";
    else
        cout<<e-b;
	return 0;
}