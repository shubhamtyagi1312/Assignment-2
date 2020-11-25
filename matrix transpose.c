# include <stdio.h>
int main()
{
    int r,c;
    int a[40][40],b[40][40],i,j;
    printf("ENTER NO. OF ROWS OF THE MATRIX\t\t:");
    scanf("%d",&r);
    printf("ENTER NO. OF COLUMNS OF THE MATRIX\t:");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("ENTERS ELEMENT OF MATRIX A(%d,%d):",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("MATRIX A\n");
    printf("----------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n");
    printf("TRANSPOE OF MATRIX A\n");
    printf("**********\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("**********");

}
