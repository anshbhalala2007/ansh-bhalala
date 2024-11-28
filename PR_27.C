#include <stdio.h>
void swap (int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x,y;
    printf("Enter the balance of account 1 : ");
    scanf("%d",&x);
    printf("Enter the balance of account 2 : ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("after the swaping\n");
    printf("Enter the balance of account 1 : %d\n",x);
    printf("Enter the balance of account 2 : %d\n",y);

    printf("\n24CE008");
    return 0;
}

