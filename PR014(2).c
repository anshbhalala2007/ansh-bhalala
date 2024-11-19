//This program is prepared by 24CE008

#include<stdio.h>

int main()
{
    int n;
    printf("Enter no. of lines: ");
    scanf("%d",&n);
    int nst=1;
    int nsp=3;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf("   ");
        }
        nsp--;
        for(int j=1;j<=i;j++)
        {
            printf(" %c",j+64);
        }
        for(int k=1;k<=i-1;k++)
        {
            printf(" %c",k+64);
        }
        printf("\n");
    }
   printf("\n24CE008_Ansh");

}

