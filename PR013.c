//This program is prepared by 24CE008

#include<stdio.h>

int main()
{
    int ver,hor;
    printf("enter the size of table vertically: ");
    scanf("%d",&ver);
    printf("enter the size of table horizontally: ");
    scanf("%d",&hor);
    printf("Multiplicati on table (%d * %d)\n",ver,hor);

    for(int i=1; i<=ver; i++)
    {
        for(int j=1; j<=hor; j++)
        {

            printf("%4d",i*j);
        }
        printf("\n");
    }
    printf("\n24CE008_Ansh");

    return 0;
}

