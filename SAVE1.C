#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,space=0;
clrscr();
printf("Enter a line of words=");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
space++;
}
}
printf("\nThe number of spaces are %d",space);
getch();
return 0;
}