#include<iostream>
using namespace std;

double Diameter(double radius);
double circumference(double radius);
double area (double radius);

int main(){
    float radius, dia, cir, ar;
    cout<<"Enter the radius of the circle :\n";
    cin>>radius;

    dia=Diameter(radius);
    cir=circumference(radius);
    ar=area(radius);

    cout<<"Diameter of the circle = "<<dia<<" \n";
    cout<<"circumference of the circle = "<<cir<<" \n";
    cout<<"area of the circle = "<<ar<<" \n";

  return 0;
}
  double Diameter(double radius){
     return(2*radius);
  } double circumference(double radius){
     return(2*3.14*radius);
  } double area(double radius){
     return(3.14*radius*radius);
  }

















