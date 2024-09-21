#include<iostream>
using namespace std;
main()
{
int a,b,c,d,num,sum;
cout<<"enter a 4 digit number:";
cin>>num;
a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
sum=a+b+c+d;
cout<<"sum of indiviual digits:"<<sum;




}