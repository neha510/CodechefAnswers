#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,n2, remainder;
        scanf("%d",&n1);
        scanf("%d",&n2);

            remainder=n1%n2;
        
        printf("%d\n",remainder);
    }
}
