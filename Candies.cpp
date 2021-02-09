#include "stdio.h"
#include "math.h"
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int sum = 1,k;
        for(k = 1; k < 100000; k++)
        {
            sum += pow(2,k);
            if(x % sum == 0)
                break;
        }
        printf("%d\n",x / sum);
    }
    return 0;
}