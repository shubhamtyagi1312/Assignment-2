#include <stdio.h>
int main()
{
    int num,sum;
    printf("-----------------------------------------------\n");
    printf("ENTER THE NUMBER\t\t\t:");
    scanf("%d",&num);
    printf("\n-----------------------------------------------\n");
    while(num>=1)
    {
        sum+=1;
        num=num/10;
    }
    printf("NUMBER OF DIGITS IN THE ENTERED NUMBER\t:");
    printf("%d",sum);
    printf("\n-----------------------------------------------");
}
