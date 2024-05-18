#include<iostream>
using namespace std;

//write a function to find the area of a circle

float circle_area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}
int main()
{
    float radius;
    cout<<"enter value of radius:"<<endl;
    cin>>radius;

    float area = circle_area(radius);

    cout<<"Area of circle is:"<<area<<endl;
}