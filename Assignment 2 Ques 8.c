#include <stdio.h>
int main()
{
int a[10];
int number,num,i,digit=0;
printf("+------------------------------------+\n");
printf("ENTER THE NUMBER\t:");
scanf("%d",&number);
printf("+------------------------------------+\n");
num=number;
for(i=0;i<10;i++)
{
    a[i]=0;
}
while (num>0)
{
    digit=num%10;
    num=num/10;
    a[digit]++;
}
printf("+------------------------------------+\n");
for(i=0;i<10;i++)
{
    if (a[i]>0)
    {
        printf("\t%d OCCURS %d TIMES\n",i,a[i]);
    }
}
printf("+------------------------------------+");
return 0;
}
