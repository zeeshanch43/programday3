#include<iostream>
using namespace std;
main()
{
float veg,fruit,coin,rupees,total1,price1,price2,total2;
int total3;
cout<<"enter vegetable price per kilogram(in coins):";
cin>>price1;
cout<<"enter fruit price per kilogram(in coins):";
cin>>price2;
cout<<"enter total kilogram of vegetables:";
cin>>veg;
cout<<"enter total kilogram of fruits:";
cin>>fruit;
total1=price1*veg;
total2=price2*fruit;
total3=(total1*0.52)+(total2*0.52);
cout<<"total earning in rupees(rps):"<<total3;







}