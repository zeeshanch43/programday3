#include<iostream>
using namespace std;
main()
{
float size,cost,area,squarefoot,price;
cout<<"enter the size of the bag in pounds:";
cin>>size;
cout<<"enter the cost of the bag:$";
cin>>cost; 
cout<<"enter the area in square feet that can be covered by the bag:";
cin>>area;
price=cost/size;
cout<<"cost of the fertilizer per pound:$"<<price<<endl;
squarefoot=cost/area;
cout<<"cost of fertilizer per square foot:$"<<squarefoot;



}