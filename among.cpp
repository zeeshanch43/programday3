#include<iostream>
using namespace std;
main()
{
float i ,p,chances;
cout<<"Number of players:";
cin>>p;
cout<<"number of imposter:";
cin>>i;
chances=100*(i/p);
cout<<"chance of being an imposter:"<<chances;
cout<<"%";


}