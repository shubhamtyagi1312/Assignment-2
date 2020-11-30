#include <stdio.h>
int main()
{
    int num,lastdigit,firstdigit,digit,rev;
    printf("---------------------------------------\n");
    printf("ENTER THE NUMBER\t\t:");
    scanf("%d",&num);
    printf("\n---------------------------------------\n");
    lastdigit=num%10;
    while(num>=1)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    firstdigit=rev%10;
    printf("FIRST DIGIT OF THE NUMBER\t: %d",firstdigit);
    printf("\nLAST DIGIT OF THE NUMBER\t: %d",lastdigit);
    printf("\n---------------------------------------\n");
}
