#include<iostream>
using namespace std;
main()
{
string name;
float weight,required;
cout<<"enter the name of the person:";
cin>>name;
cout<<"enter the target weight loss:";
cin>>weight;

required=weight*15;
cout<<name<<" will need "<<required<<" days to lose "<<weight<<"kg by following the doctor's suggestions";


}