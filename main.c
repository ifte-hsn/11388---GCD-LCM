#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gcd, lcm;
    int t;

    while(scanf("%d",&t)==1) {

        int i = t;

        for(i = 0; i < t; i++)
        {
            scanf("%d%d", &gcd, &lcm);

            if(lcm%gcd == 0) {
                printf("%d %d\n", gcd, lcm);
            }
            else
            {
                printf("%d\n",-1);
            }

        }

    }
    return 0;
}
