#include <stdio.h>
#include<stdbool.h>
struct book{
    int ac_number;
    char title[20];
    char auther[20];
    int amount;
}b1;
void display(struct book b1){
    printf("book details : \n");
    printf("Accession number : %d\n",b1.ac_number);
    printf("Title :  %s\n",b1.title);
    printf("Auther : %s\n",b1.auther);

    printf("amount : %d\n",b1.amount);

}
int main()
{
    bool flag=0;
    printf("Enter the accession number : ");
    scanf("%d",&b1.ac_number);
    printf("Enter the title of the book : ");
    scanf("%s",b1.title);
    printf("Enter the auther of the book : ");
    scanf("%s",b1.auther);
    printf("Enter the amount of book : ");
    scanf("%d",&b1.amount);
    printf("If book is issued entet 1 and book is not issued enter 0 : ");
    scanf("%d",&flag);
    display(b1);
    if(flag == 1)   printf("Book is issued.");
    else    printf("Book is not issued.");
    printf("\n24CE008_Ansh");
    return 0;
}
