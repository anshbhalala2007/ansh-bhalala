//This program is prepared by 24CE008
#include<stdio.h>

int main()
{
    int user, comp, sticks=21;
    printf("Total matchsticks is 21 \n");
    printf("Pick matchstick between 1 to 4 \n");

    while(1)
    {
        printf("Select stick= ");
        scanf("%d",&user);
        if(user<1 || user>4)
        {
            printf("Invalid\n");
            continue;
        }
        printf("You select %d matchstick\n",user);
        sticks=sticks-user;
        printf("Remaining matchstick is %d\n",sticks);

        comp=5-user;
        printf("Computer select %d matchstick\n",comp);
        sticks=sticks-comp;
        printf("Remaining matchstick is %d\n",sticks);


        if(sticks==1)
        {
            printf("Remaining matchstick is %d\n",sticks);
            printf("You lost the game\n");
            break;
        }
    }
    printf("\n24CE008_Ansh ");
    return 0;
}

