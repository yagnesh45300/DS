#include<iostream.h>
#include<conio.h>
int fibo(int n)
{
if (n==0||n==1)
{
return 0;
}
if(n==2)
return 1;
else
return fibo(n-1)+fibo(n-2);
}
int main()
{
int a,i=1;
clrscr();
cout<<"enter A: ";
cin>>a;
while(i<=a)
{
cout<<fibo(i)<<"  ";
i++;
}
getch();
return 0;
}