#include<iostream>
using namespace std;

double max(int num1,int num2);
double min(int num1,int num2);
int main(){
    float num1,num2,maximum,minimum;
    cout<<"Enter two numbers :\n";
    cin>>num1>>num2;

    maximum=max(num1,num2);
    minimum=min(num1,num2);

    cout<<"maximum = "<<maximum;
    cout<<"minimum = "<<minimum;

    return 0;
} double max(int num1,int num2){
    return(num1>num2)? num1:num2;
} double min(int num1,int num2){
    return(num1>num2)? num2:num1;
}
















