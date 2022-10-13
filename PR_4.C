#include<stdio.h>
#include<conio.h>
void main()
{
int first,last,i,middle,sElement,size,list[50];
clrscr();
printf("enetr number of elements of list: ");
scanf("%d",&size);

printf("enter intger values in assending order\n",size);

for(i=0;i<size;i++)
 scanf("%d",&list[i]);

printf("enter element to be search:");
scanf("%d",&sElement);

first=0;
last=size-1;
middle=(first+last/2);

while (first<=last){
	if(list[middle] < sElement)
	first=middle+1;
		else if(list[middle] == sElement){
			printf("entre element is found on index number %d",middle);
			break;
			}
	else
		last=middle-1;
		middle=(first+last)/2;
		}
	if (first>last)
	printf("enter element not found in list");
	getch();
}