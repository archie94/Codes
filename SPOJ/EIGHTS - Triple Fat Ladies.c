#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t,k,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&k);
        /*
        1. 192
        2. 442
        3. 692
        4. 942
        5. 1192
        6. 1442
        7. 1692
        8. 1942
        9. 2192
        10. 2442
        */
        /* observe that ans is of the form 192 + 250*(k-1)*/
        printf("%lld\n",(192 + 250*(k-1)));
    }
    return 0;
}
