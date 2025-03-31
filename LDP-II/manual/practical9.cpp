#include<iostream>
using namespace std;
float convert(float x){
    return x*3.28084;
}
int main(){
    float meter, foot;
    cout << "Enter Meter: ";
    cin >> meter;
    foot = convert(meter);
    cout << foot << endl;
}