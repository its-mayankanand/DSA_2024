#include<iostream>
using namespace std;

//print array function

void printArray(int arr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
   int arr[5] = {2,4,6,8,10};
   int size = 5;

   printArray(arr,size);
}