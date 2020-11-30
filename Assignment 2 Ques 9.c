#include <stdio.h>

int main()
{
    int num1,num2,num3,num4,digits;
    printf("+-------------------------------------------------------+\n");
    printf("HOW MANY DIGIT NUMBER YOU WANT TO ENTER(CAN'T EXCEED 4):");
    scanf("%d",&digits);
    printf("+-------------------------------------------------------+\n");
    if(digits==1)
    {
        printf("ENTER THE ONE-DIGIT NUMBER\t\t:");
        scanf("%d",&num1);
        printf("+-------------------------------------------------------+\n\n");
        switch(num1)
        {
            case 0:
                printf("Zero");
                break;
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
        }
    }
    if(digits==2)
    {
        printf("ENTER THE TWO-DIGIT NUMBER\t\t:");
        scanf("%1d%1d",&num1,&num2);
        printf("+-------------------------------------------------------+\n");
        switch (num1)
        {
            case 1:
                switch (num2)
                {
                    case 0:
                        printf("Ten");
                        break;
                    case 1:
                        printf("Eleven");
                        break;
                    case 2:
                        printf("Twelve");
                        break;
                    case 3:
                        printf("Thirteen");
                        break;
                    case 4:
                        printf("Fourteen");
                        break;
                    case 5:
                        printf("Fifteen");
                        break;
                    case 6:
                        printf("Sixteen");
                        break;
                    case 7:
                        printf("Seventeen");
                        break;
                    case 8:
                        printf("Eighteen");
                        break;
                    case 9:
                        printf("Nineteen");
                        break;
                }
            case 2:
                printf("Twenty");
                break;
            case 3:
                printf("Thirty");
                break;
            case 4:
                printf("Forty");
                break;
            case 5:
                printf("Fifty");
                break;
            case 6:
                printf("Sixty");
                break;
            case 7:
                printf("Seventy");
                break;
            case 8:
                printf("Eighty");
                break;
            case 9:
                printf("Ninety");
                break;
        }
        switch (num2)
        {
            case 1:
                printf(" One");
                break;
            case 2:
                printf(" Two");
                break;
            case 3:
                printf(" Three");
                break;
            case 4:
                printf(" Four");
                break;
            case 5:
                printf(" Five");
                break;
            case 6:
                printf(" Six");
                break;
            case 7:
                printf(" Seven");
                break;
            case 8:
                printf(" Eight");
                break;
            case 9:
                printf(" Nine");
                break;
        }
    }
    if(digits==3)
    {
        printf("ENTER THE THREE-DIGIT NUMBER\t\t:");
        scanf("%1d%1d%1d",&num1,&num2,&num3);
        printf("+-------------------------------------------------------+\n");
        switch(num1)
        {
            case 1:
                printf("One hundred");
                break;
            case 2:
                printf("Two hundred");
                break;
            case 3:
                printf("Three hundred");
                break;
            case 4:
                printf("Four hundred");
                break;
            case 5:
                printf("Five hundred");
                break;
            case 6:
                printf("Six hundred");
                break;
            case 7:
                printf("Seven hundred");
                break;
            case 8:
                printf("Eight hundred");
                break;
            case 9:
                printf("Nine hundred");
                break;
        }
        switch(num2)
        {
            case 0:
                switch(num3)
                {
                    case 1:
                        printf(" one");
                        break;
                    case 2:
                        printf(" two");
                        break;
                    case 3:
                        printf(" three");
                        break;
                    case 4:
                        printf(" four");
                        break;
                    case 5:
                        printf(" five");
                        break;
                    case 6:
                        printf(" six");
                        break;
                    case 7:
                        printf(" seven");
                        break;
                    case 8:
                        printf(" eight");
                        break;
                    case 9:
                        printf(" nine");
                        break;
                }
                break;
            case 1:
                switch(num3)
                {
                    case 0:
                        printf(" ten");
                        break;
                    case 1:
                        printf(" eleven");
                        break;
                    case 2:
                        printf(" twelve");
                        break;
                    case 3:
                        printf(" thirteen");
                        break;
                    case 4:
                        printf(" fourteen");
                        break;
                    case 5:
                        printf(" fifteen");
                        break;
                    case 6:
                        printf(" sixteen");
                        break;
                    case 7:
                        printf(" seventeen");
                        break;
                    case 8:
                        printf(" eighteen");
                        break;
                    case 9:
                        printf(" nineteen");
                        break;
                }
                break;
            case 2:
                printf(" twenty");
                break;
            case 3:
                printf(" thirty");
                break;
            case 4:
                printf(" forty");
                break;
            case 5:
                printf(" fifty");
                break;
            case 6:
                printf(" sixty");
                break;
            case 7:
                printf(" seventy");
                break;
            case 8:
                printf(" eighty");
                break;
            case 9:
                printf(" ninety");
                break;
        }
        if(num2!=0 && num2!=1)
        {
            switch(num3)
            {
                case 1:
                    printf(" one");
                    break;
                case 2:
                    printf(" two");
                    break;
                case 3:
                    printf(" three");
                    break;
                case 4:
                    printf(" four");
                    break;
                case 5:
                    printf(" five");
                    break;
                case 6:
                    printf(" six");
                    break;
                case 7:
                    printf(" seven");
                    break;
                case 8:
                    printf(" eight");
                    break;
                case 9:
                    printf(" nine");
                    break;
            }
        }
    }
    if(digits==4)
    {
        printf("ENTER THE FOUR-DIGIT NUMBER\t\t:");
        scanf("%1d%1d%1d%d",&num1,&num2,&num3,&num4);
        printf("+-------------------------------------------------------+\n");
        switch(num1)
        {
            case 1:
                printf("One thousand");
                break;
            case 2:
                printf("Two thousand");
                break;
            case 3:
                printf("Three thousand");
                break;
            case 4:
                printf("Four thousand");
                break;
            case 5:
                printf("Five thousand");
                break;
            case 6:
                printf("Six thousand");
                break;
            case 7:
                printf("Seven thousand");
                break;
            case 8:
                printf("Eight thousand");
                break;
            case 9:
                printf("Nine thousand");
                break;
        }
        switch(num2)
        {
            case 0:
                switch(num3)
                {
                    case 0:
                        switch(num4)
                        {
                            case 1:
                                printf(" one");
                                break;
                            case 2:
                                printf(" two");
                                break;
                            case 3:
                                printf(" three");
                                break;
                            case 4:
                                printf(" four");
                                break;
                            case 5:
                                printf(" five");
                                break;
                            case 6:
                                printf(" six");
                                break;
                            case 7:
                                printf(" seven");
                                break;
                            case 8:
                                printf(" eight");
                                break;
                            case 9:
                                printf(" nine");
                                break;
                        }
                        break;
                    case 1:
                        switch(num4)
                        {
                            case 0:
                                printf(" ten");
                                break;
                            case 1:
                                printf(" eleven");
                                break;
                            case 2:
                                printf(" twelve");
                                break;
                            case 3:
                                printf(" thirteen");
                                break;
                            case 4:
                                printf(" fourteen");
                                break;
                            case 5:
                                printf(" fifteen");
                                break;
                            case 6:
                                printf(" sixteen");
                                break;
                            case 7:
                                printf(" seventeen");
                                break;
                            case 8:
                                printf(" eighteen");
                                break;
                            case 9:
                                printf(" nineteen");
                                break;
                        }
                        break;
                    case 2:
                        printf(" twenty");
                        break;
                    case 3:
                        printf(" thirty");
                        break;
                    case 4:
                        printf(" forty");
                        break;
                    case 5:
                        printf(" fifty");
                        break;
                    case 6:
                        printf(" sixty");
                        break;
                    case 7:
                        printf(" seventy");
                        break;
                    case 8:
                        printf(" eighty");
                        break;
                    case 9:
                        printf(" ninety");
                        break;
                }
                break;
            case 1:
                printf(" one hundred");
                break;
            case 2:
                printf(" two hundred");
                break;
            case 3:
                printf(" three hundred");
                break;
            case 4:
                printf(" four hundred");
                break;
            case 5:
                printf(" five hundred");
                break;
            case 6:
                printf(" six hundred");
                break;
            case 7:
                printf(" seven hundred");
                break;
            case 8:
                printf(" eight hundred");
                break;
            case 9:
                printf(" nine hundred");
                break;
        }
        if(num2!=0)
        {
            switch(num3)
            {
                case 0:
                    switch(num4)
                    {
                        case 1:
                            printf(" one");
                            break;
                        case 2:
                            printf(" two");
                            break;
                        case 3:
                            printf(" three");
                            break;
                        case 4:
                            printf(" four");
                            break;
                        case 5:
                            printf(" five");
                            break;
                        case 6:
                            printf(" six");
                            break;
                        case 7:
                            printf(" seven");
                            break;
                        case 8:
                            printf(" eight");
                            break;
                        case 9:
                            printf(" nine");
                            break;
                    }
                    break;
                case 1:
                    switch(num4)
                    {
                        case 0:
                            printf(" ten");
                            break;
                        case 1:
                            printf(" eleven");
                            break;
                        case 2:
                            printf(" twelve");
                            break;
                        case 3:
                            printf(" thirteen");
                            break;
                        case 4:
                            printf(" fourteen");
                            break;
                        case 5:
                            printf(" fifteen");
                            break;
                        case 6:
                            printf(" sixteen");
                            break;
                        case 7:
                            printf(" seventeen");
                            break;
                        case 8:
                            printf(" eighteen");
                            break;
                        case 9:
                            printf(" nineteen");
                            break;
                    }
                    break;
                case 2:
                    printf(" twenty");
                    break;
                case 3:
                    printf(" thirty");
                    break;
                case 4:
                    printf(" forty");
                    break;
                case 5:
                    printf(" fifty");
                    break;
                case 6:
                    printf(" sixty");
                    break;
                case 7:
                    printf(" seventy");
                    break;
                case 8:
                    printf(" eighty");
                    break;
                case 9:
                    printf(" ninety");
                    break;
            }
        }
        if(num3!=0)
        {
            switch(num4)
            {
                case 1:
                    printf(" one");
                    break;
                case 2:
                    printf(" two");
                    break;
                case 3:
                    printf(" three");
                    break;
                case 4:
                    printf(" four");
                    break;
                case 5:
                    printf(" five");
                    break;
                case 6:
                    printf(" six");
                    break;
                case 7:
                    printf(" seven");
                    break;
                case 8:
                    printf(" eight");
                    break;
                case 9:
                    printf(" nine");
                    break;
            }
        }

    }
    printf("\n+-------------------------------------------------------+\n");
    return 0;
}
