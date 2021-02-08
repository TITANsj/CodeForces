#include <iostream>
 
using namespace std;
 
int main()
{
    int n,x=0;
    char a[5];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a[0]=='X'){
            if(a[1]=='+')
                x++;
            else
                x--;
        }
        else if(a[2]=='X'){
            if(a[1]=='+')
                x++;
            else
                x--;
        }
    }
    cout<<x<<endl;
    return 0;
}