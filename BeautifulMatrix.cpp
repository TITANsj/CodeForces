#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    int a[5][5],k,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                k=i;
                l=j;
            }
        }
    }
    cout<<abs(2-k)+abs(2-l);
 
    return 0;
}