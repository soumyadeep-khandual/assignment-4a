#include<iostream>
using namespace std;

int isEven(int num)
{
  return !(num & 1);
}

int main()
{
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    if(isEven(num))
    {
        cout<<"The number is even.";
    }
    else
    {
        cout<<"The number is odd.";
    }

    return 0;
}














