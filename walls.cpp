#include<iostream>
using namespace std;
main()
{
int sqmeters,width,height,walls;
cout<<"Number of square meters you can paint:";
cin>>sqmeters;
cout<<"width of a single wall:";
cin>>width;
cout<<"height of single wall:";
cin>>height;
walls=sqmeters/(height*width);
cout<<"number of walls you can paint:"<<walls;
}