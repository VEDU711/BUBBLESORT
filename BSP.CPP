#include<iostream.h>
#include<conio.h>
class bubblesort
{
int i,j,n,temp,f,a[25];
public :
void start();
void sort();
void display();
};
void bubblesort::start()
{
cout<<"ENTER NO. OF ELEMENTS TO BE SORTED <MAX=25>"<<endl;
cin>>n;
cout<<"ENTER NUMBERS TO BE SORTED"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
void bubblesort::sort()
{
for(i=0;i<n-1;i++)
{
f=1;
for(j=0;j<(n-1-i);j++)
{
if(a[j]>a[j+1])
{
f=0;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
if(f)
break;
}
}
void bubblesort::display()
{
cout<<"SORTED LIST:"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
void main()
{
clrscr();
bubblesort bs;
bs.start();
bs.sort();
bs.display();
getch();
}
/*
ENTER NO. OF ELEMENTS TO BE SORTED <MAX=25>
5
ENTER NUMBERS TO BE SORTED
25
30
45
40
59
SORTED LIST:
25
30
40
45
59
*/










