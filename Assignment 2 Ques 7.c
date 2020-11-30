#include <stdio.h>
#include <math.h>
int main()
{
    int num,original,swapnum,lastdigit,firstdigit,digit,rev,length=0,power;
    printf("--------------------------------------------------------\n");
    printf("ENTER THE NUMBER\t\t\t\t:");
    scanf("%d",&num);
    printf("\n--------------------------------------------------------\n");
    original=num;
    lastdigit=num%10;
    while(num>=1)
    {
        digit=num%10;
        length+=1;
        rev=(rev*10)+digit;
        num=num/10;
    }
    power=pow(10,length-1);
    firstdigit=rev%10;
    swapnum=lastdigit*power;
    swapnum=swapnum+original%power;
    swapnum-=lastdigit;
    swapnum+=firstdigit;
    printf("NUMBER AFTER SWAPPING FIRST AND LAST DIGIT\t:%d",swapnum);
    printf("\n--------------------------------------------------------");
    return 0;
}
