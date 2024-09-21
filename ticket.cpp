#include<iostream>
using namespace std;
main()
{
string  name;
float adult,child,ticket1,ticket2,charity,total1,total2,donation;
cout<<"enter the name of the moive:";
cin>>name;
cout<<"enter the adult ticket price:$";
cin>>adult;
cout<<"enter the child ticket price:$";
cin>>child;
cout<<"enter the number of adukt tickets sold:";
cin>>ticket1;
cout<<"enter the number of child tickets sold:";
cin>>ticket2;
cout<<"enter the percentage of the amount to be donated to charity:";
cin>>charity;
cout<<" "<<endl;
cout<<" "<<endl;

cout<<"movie:"<<name<<endl;
total1=(adult*ticket1)+(child*ticket2);
cout<<"total amount generated from ticket sales:"<<total1<<endl;
donation=total1/charity;
cout<<"donation to charity("<<charity<<"):"<<donation<<endl;
total2=total1-donation;
cout<<"remaining after donation:$"<<total2;

}