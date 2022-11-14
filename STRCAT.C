#include<stdio.h>
#include<conio.h>

int str_len(char a[])
{
int i=0;
while (a[i]!='\0')
	{

	i++;
	}
return i;
}
void str_cat(char sou[],char dest[])
{
int i=0,j=0;
i=str_len(sou);
while(dest[j]!='\0')
{
sou[i]=dest[j];
j++;
i++;
}
sou[i]='/0';
}
void main()
{
char a[20],b[10];
clrscr();
printf("entre string : ");
gets(a);
printf("enetr string : ");
gets(b);
str_cat(a,b);
printf("srtring is %s",a);
strcat(a);
getch();
}