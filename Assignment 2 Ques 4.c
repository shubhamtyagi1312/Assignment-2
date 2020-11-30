#include <stdio.h>
int main()
{
     int i,n;
     char choice='y';
     printf("+------------------------------------+\n");
     printf("| MULTIPLICATION TABLE OF ANY NUMBER |\n");
     printf("+------------------------------------+\n");

     while(choice=='y')
     {

        printf("ENTER ANY NUMBER\t\t:");
        scanf("%d",&n);
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }
        printf("DO YOU WANT TO ENTER ANOTHER NUMBER(y/n):");
        scanf("%s",&choice);
     }

}
