#include<iostream>
#include<studio.h>
int main ()
{
int i,k,n;
cout <<"Enternumber of digits in the input number ";
cin>>k;
cout <<"Enter the number";
cin>>n;
for (i=0;i <k;i++)
{
a [i]=n%10;
n=n/10;
}
for (i=k-1;i <k;i--)
{
cout <<a [i]
}
return 0;
}
