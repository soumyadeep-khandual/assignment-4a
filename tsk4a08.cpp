#include <iostream>
using namespace std;

int getCubicSumOfDigits(int number){
    int lastDigit, sum = 0;
    while(number != 0){
        lastDigit = number%10;
        sum = sum + lastDigit*lastDigit*lastDigit;
        number = number/10;
    }
    return sum;
}

int main(){
    int x, y, sum, i;

    cout << "Enter two integers\n";
    cin >> x >> y;

 cout << "Armstrong numbers between " << x <<" and "<< y << endl;

    for(i = x; i <= y; i++){
        sum = getCubicSumOfDigits(i);
        if(sum == i){
            cout << i << endl;
        }
    }

    return 0;
}
