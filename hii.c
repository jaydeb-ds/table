#include<stdio.h>

int main()
{
    int a,b;

    printf(" enter the number of table\n");
    scanf("%d",&a);

    for (int i=1; i<=10; i++)
    {
        b=a*i;
        printf("%d x %d = %d\n",a,i,b);
    }
    
    return 0;
}