#include <stdio.h>
struct book{
    char book_title[20];
    char book_auther[20];
    float book_amount;
}b1;
void display(struct book b1);

int main()
{
    printf("Enter the title of book : ");
    gets(b1.book_title);
    printf("Enter the name of auther of book : ");
    gets(b1.book_auther);
    printf("Enter the amount of book : ");
    scanf("%f",&b1.book_amount);
    printf("-------------------------------\n");
    display(b1);

    printf("\n24CE008_Ansh");
    return 0;
}

void display (struct book b1){
    printf("the name of book is %s\n",b1.book_title);
    printf("the auther of book is %s\n",b1.book_auther);
    printf("the amount of book is %.2f",b1.book_amount);
}
