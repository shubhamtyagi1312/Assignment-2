#include <stdio.h>
int main()
{
 int i,n,sum=0;
 printf("+-----------------------------------+\n");
 printf("| SUM OF ODD NUMBERS BETWEEN 1 to n |\n");
 printf("+-----------------------------------+\n");
 printf("ENTER THE VALUE OF n\t\t:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     if(i%2!=0)
     {
         sum+=i;
     }
 }
 printf("-----------------------------------\n");
 printf("SUM OF ODD NUMBERS FROM 1 to %d\t:%d",n,sum);
 printf("\n-----------------------------------");
}
