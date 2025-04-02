#include<iostream>
using namespace std;
class powerconvertor{
    public:
    int base, power, value=1;
};
int main(){
    powerconvertor poc;
    cout << "Enter the value of base and power: ";
    cin >> poc.base >> poc.power;
    for(int i=0;i<poc.power;i++){
        poc.value *=poc.base;
    }
    cout << poc.value << endl;
}