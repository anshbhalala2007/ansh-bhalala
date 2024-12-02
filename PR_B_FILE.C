#include<stdio.h>
int main()
{
    FILE *p;
    int marks,i,n;
    p=fopen("Marks.txt","w");
    printf("Enter the number of student :");
    scanf("%d",&n);
    printf("Enter the marks of %d students :\n",n);
    for(i=0;i<n;i++)
    {
        printf("Student %d :",i+1);
        scanf("%d",&marks);
        putw(marks,p);
    }
    fclose(p);
    printf("Marks have been written to the 'marks.txt'.\n");
    p=fopen("Marks.txt","r");
    if(p==NULL);
    {
        printf("Marks.txt file does not exists.");
        return 1;
    }
    while((marks = getw(p)) !=EOF)
    {
        printf("Student %d : %d\n",i,marks);
        i++;
    }
    fclose(p);
    return 0;
}
