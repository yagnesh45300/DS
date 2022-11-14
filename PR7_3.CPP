#include<iostream.h>
#include<conio.h>
int gcd(int m,int n)
{
if(n<=m && m%n==0)
{
	return n;
}
if(m<n)
	return gcd(n,m);
else
	return gcd(n,m%n);
}
int main()
{
int a,b;
clrscr();
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
cout<<"gcd:"<<gcd(a,b);
getch();
return 0;
}