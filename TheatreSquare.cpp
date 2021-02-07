#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
 
    long long int s;
    double n,m,a;
    cin>>n>>m>>a;
    s=ceil(n/a)*ceil(m/a);
    cout<<s<<endl;
    return 0;
}