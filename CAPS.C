#include<conio.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
char str[100];
int count=0,i=0;
clrscr();
printf("Enter a string=");
gets(str);
while(str[i]!='\0')
{
if(isupper(str[i]))
{
count++;
}
i++;
}
printf("\nThe number of capital letters are %d",count);
getch();
return 0;
}
