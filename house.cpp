#include<iostream>
using namespace std;
main()
{
int age,moved,avg;
cout<<"enter the person's age:";
cin>>age;
cout<<"enter the number of times they've moved:";
cin>>moved;
avg=age/(moved+1);
cout<<"average number of years they lived in same house:"<<avg; 

}