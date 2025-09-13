#include<stdio.h>
#include<conio.h>
int main()
{
int i,j=0;
char str[100],result[100];
clrscr();
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++)
{
if(str[i] != ' ')
{
result[j++]=str[i];
}
}
result[j]='\0';
printf("String without spaces = %s",result);
getch();
return 0;
}