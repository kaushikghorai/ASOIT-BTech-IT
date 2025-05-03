#include<iostream>
using namespace std;
int main(){
    char character;
    cout << "Enter the character to check whether a latter is a vowel or constant: ";
    cin >> character;
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u') cout << character << " is vowel" << endl;
    else cout << character << " is constant" << endl;
}