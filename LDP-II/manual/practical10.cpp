#include<iostream>
using namespace std;
int main(){
    int base, power, value=1;
    cout << "Enter the value of base and power: ";
    cin >> base >> power;
    for(int i=0;i<power;i++){
        value *=base;
    }
    cout << value << endl;
}