#include<stdio.h>
#include<conio.h>
char*str_str(char a[],char b[])
{
char *x="(null)";
int i=0,j,k;
if(strlen(a)>strlen(b))
while (a[i]!='\0')
{
j=i;
k=0;
while(a[j]==b[k] && b[k]!='\0')
{
j++;
k++;
}
if (b[k]=='\0')
{
x=a+i;
break;
}i++;
}
return x;
}
int main(void)
{
char*str1,*str2,*ptr;
clrscr();
printf("enter string:");
gets(str1);
printf("enter string:");
gets(str2);
ptr=str_str(str1,str2);
printf("the substring is %s\n",ptr);
ptr=str_str(str1,str2);
printf("the substring is %s\n",ptr);
getch();
return 0;
}