#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    int b=a.size();
    for(int i=0;i<b;i++){
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            cout<<"YES";
            goto end;
        }
    }
    cout<<"NO";
    end:
    return 0;
}