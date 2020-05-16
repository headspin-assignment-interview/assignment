#include<iostream>
#include<stdio.h>
int main()
{
int i;
int n;
int sum=1;
cout<<“enter n value”;
cin>>n;
for (i=1;i<n;++i)
{
sum=sum+(1/((2*i)+1));
}
cout <<sum;
return 0;
}
