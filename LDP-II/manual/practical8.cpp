#include<iostream>
using namespace std;
int main(){
    // cout << "Hello World\n" << endl;
    //int a, b;
    // cin >> a >> b;
    // cout << a+b << endl;

    //------odd/even------
    int num;
    cout << "Enter any number to check odd even" << endl;
    cin >> num;
    if(num%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}