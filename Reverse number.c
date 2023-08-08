#include<stdio.h>
{
int i,n,a[6];
printf("enter the numbers:");
scanf("%d",&n);

for(i=0;i<6;i++)
{
    a[i]=n%10;
    n=n/10;
    printf("%d",a[i]);
}
return 0;
}
