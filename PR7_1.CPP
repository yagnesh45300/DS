#include<iostream.h>
#include<conio.h>
int fact(int n)
{
if(n>1)
{
return n*fact(n-1);
}
else
return 1;
}
int main()
{
int a;
clrscr();
cout<<"enter a:";
cin>>a;
cout<<fact(a);
getch();
return 0;
}