
#include<stdio.h>
int main()
{
FILE *F1;
char name[50],rev_note[50];
int i,j;
int length=0;
// printf("cobnters of marks file\n");
F1=fopen("revers","w");
printf("Enter the word = ");
gets(name);
fclose(F1);
F1=fopen("revers","r");
printf("\n Display the name\n");
for(i=0;name[i]!='\0'/*(name=getw(F1))!= EOF*/;i++)
length++;
for(i=length-1,j=0 ; i>=0/*(number=getw(F1))!= EOF*/ ; i--,j++)
rev_note[j]=name[i];
rev_note[j]='\0';
printf("\nThe revers notes is :");
puts(rev_note);
fclose(F1);
printf("\nId number=24ce008");
}
