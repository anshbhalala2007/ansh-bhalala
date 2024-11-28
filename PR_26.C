#include <stdio.h>
struct team{
    char team_name[20];
    char team_type[20];
    struct coach{
        char coach_name[20];
        int coach_age;
        int coach_exp;
    }c1;
}t1;
void display(struct team b1);

int main()
{
    printf("Enter the name of team : ");
    gets(t1.team_name);
    printf("Enter the type of team : ");
    gets(t1.team_type);
    printf("Enter the name of coach : ");
    gets(t1.c1.coach_name);
    printf("Enter the age of coach : ");
    scanf("%d",&t1.c1.coach_age);
    printf("Enter the experience of coach : ");
    scanf("%d",&t1.c1.coach_exp);
    printf("---------------------");
    display(t1);

    printf("\n24CE008_Ansh");
    return 0;
}

void display (struct team b1){
    printf("the name of team is %s\n",t1.team_name);
    printf("the type of team is %s\n",t1.team_type);
    printf("the name of coach is %s\n",t1.c1.coach_name);
    printf("the age of coach is %d\n",t1.c1.coach_age);
    printf("the experience of coach is %d\n",t1.c1.coach_exp);

}
