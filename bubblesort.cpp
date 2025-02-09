#include <iostream>
using namespace std;
int main()
{
    int n,counter;
    cin>>n;//asking user to enter how many elements
    int arr[n]; //array of n size
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];//inserting elements
    }
    counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }          
        }
        counter++;
    }
    cout<<"\n sorted array:=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}



