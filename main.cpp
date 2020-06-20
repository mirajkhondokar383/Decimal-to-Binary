#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int dividend;
    string binary_string = "";
    cout<<"Enter the positive decimal value: ";
    cin>>dividend;
    cout<<"\n";
    if (dividend<0) {
        cout<<"Negative value is not supported.";
    }
    else if (dividend !=0 && dividend != 1) {
        while(dividend != 1) {
              binary_string = binary_string + to_string(dividend%2);
              dividend = dividend/2;
        }
        binary_string = binary_string + "1";
        cout<<"The binary value of the decimal is: ";
        for(int i = binary_string.length()-1; i>-1;i--) {
            cout<<binary_string[i];
        }
    }
    else if(dividend == 0) {
        cout<<"The binary value of the decimal is: 0";
    }
    else {
        cout<<"The binary value of the decimal is: 1";
    }
    cout<<"\n";

}
