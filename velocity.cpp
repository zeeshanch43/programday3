#include<iostream>
using namespace std;
main()
{
float final,initial,acceleration,time;
cout<<"Initial velocity in m/s:";
cin>>initial;
cout<<"time in seconds:";
cin>>time;
cout<<"acceleration in m/s^2:";
cin>>acceleration;
final=(acceleration*time)+initial;
cout<<"final velocity is:"<<final;

}