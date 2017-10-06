#include <stdio.h>
#include <iostream>
using namespace std;

long long fact(int num);
void printStrongNumbers(int start, int end);


int main()
{
    int start, end;

    cout<<"Enter the lower limit to find strong number: ";
    cin>>start;
    cout<<"Enter the upper limit to find strong number: ";
    cin>>end;

    cout<<"All strong numbers between "<<start<<" and "<<end<<endl;
    printStrongNumbers(start, end);

    return 0;
}

void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;
    while(start != end)
    {
        sum = 0;
        num = start;
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }
        if(start == sum)
        {
            cout<<start<<endl;
        }

        start++;
    }
}
long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}


