#include<stdio.h>
#include<conio.h>
int main()
{
char s1[100],s2[100];
int i,flag=1;
printf("\nEnter the first string=");
scanf("%s",s1);
printf("\nEnter the second string=");
scanf("%s",s2);
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
  {
    if(s1[i]!=s2[i])
    {
    flag=0;
    break;
    }
  }
  if(flag==1)
  {
    printf("\nThe given strings are equal");
  }
  else
  {
    printf("\nThe given strings are not equal");
  }
  getch();
  return 0;

}