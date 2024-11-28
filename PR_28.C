#include<stdio.h>
int main()
{
int i,a[40];
int distinction=0,first_class=0,pass=0,fail=0;
int *p=a;
printf("Enter the 10 students marks :");
for(i=1 ; i<=10 ; i++ )
{
printf("\nEnter the %d studrent marks =",i);
scanf("%d",&a[i]);
}
for(i=1 ; i<=10 ; i++)
{
if(*(p+i)>70)
{
distinction++;
}
else if( *(p+i)>=60)
{
first_class++;
}
else if( *(p+i)>40)
{
pass++;
}
else
{
fail++;
}
}
printf("\n DISTINCTION Students=%d",distinction);
printf("\n First Class Students=%d",first_class);
printf("\n Number Of pass Students=%d",pass);
printf("\n Number Of Fail Students=%d",fail);
printf("\n24CE008");
return 0;
}

