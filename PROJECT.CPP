#include <iostream.h>
#include <conio.h>
#include <string.h>

int stack[10], choice, n, top, i, x;
void push(void);
void pop();
void display();

int seq_search(int a[],int n,int k)
{
int i=0,m=-1;
a[n]=k;
while(i<n)
{
if(a[i]==k)
{
m=i;
break;
}
i++;
}
if(i==n)
return -1;
else
return m;
}


int main()
{
	int a[11],i,j,f,k;
	clrscr();
	top = -1;
	cout<<"enter number of elements (must be less then 10)";
	cin>>n;
	for(i=0;i<n;i++)
		{
			cout<<"enter number of a : "<<i;
			cin>>a[i];//scanf("%d",&a[i]);
		}
      /*	cout << "enter size of stack : ";
	cin >> n;
	// cout<<"\n stackm opration using array";*/
	cout << "\n1.enter student name(entry) \n2.delete student name  \n3.display all student name \n4.exit \n5.serch";
	do
	{
		cout << "\n enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			cout << "\n the end \n";
		}
		case 5:
			cout<<"entre key to be serched : ";
			cin>>k;
			a[n]=k;
			if((f=seq_search(a,n,k))!=-1)
			{
				cout<<"serched element is at at index "<<f;
			}
			else
				cout<<"unseccessfully serched!";

		defualt:
		{
			cout << " enter valid choice ";
		}
		}
	} while (choice != 5);
	return 0;
}
void push()
{
	if (top > n - 1)
	{
		cout << "\n stack is overflow ";
	}
	else
	{
		cout << "entre value to be pushed : ";
		cin >> x;
		top++;
		stack[top] = x;
	}
}
void pop()
{
	if (top <= -1)
	{
		cout << "\n stack is underflow ! \n";
	}
	else
	{
		cout << "\n THE POPED element is :" << stack[x];
		top--;
	}
}
void display()
{
	if (top >= 0)
	{
		cout << "\n the element of the stack is:";
		for (i = top; i >= 0; i--)
		{
			cout << stack[i] << endl;
		}
		cout << "\nenter your choice : ";
	}
	else
	{
		cout << "\n stack is empty ";
	}
}

/*int seq_search(int a[],int n,int k)
{
int i=0,m=-1;
a[n]=k;
while(i<n)
{
if(a[i]==k)
{
m=i;
break;
}
i++;
}
if(i==n)
return -1;
else
return m;
}*/



