#include<iostream>
using namespace std;
class practical12{
    public:
    char character;
    void charactercheck(char charactercheckfunctionvariable){
        if(charactercheckfunctionvariable=='a' || charactercheckfunctionvariable=='e' || charactercheckfunctionvariable=='i' || charactercheckfunctionvariable=='o' || charactercheckfunctionvariable=='u') cout << character << " is vowel." << endl;
        else cout << charactercheckfunctionvariable << " is constant." << endl;
    }
};
int main(){
    practical12 p121;
    cout << "Enter character to check whether a letter is a vowel and constant.: ";
    cin >> p121.character;
    p121.charactercheck(p121.character);
}