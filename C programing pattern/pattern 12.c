#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter N = ");
    scanf("%d",&n);
     for(row=1; row<=n; row++)
        {
            //printing space
            for(col=1; col<=n-row; col++)
                {
                printf(" ",col);
                }
            //printing Number
            for(col=1; col<=row; col++)
                {
                    printf("%d",col);

                }
            printf("\n");
        }

    for(row=n; row>=1; row--)
        {
            //printing space
            for(col=1; col<=n-row; col++)
                {
                printf(" ",col);
                }
            //printing Number
            for(col=1; col<=row; col++)
                {
                    printf("%d",col);

                }
            printf("\n");

        }

}





