// #include<iostream>
// using namespace std;
// class sumclass{
//     public:
//     int num1, num2;
// };
// int main(){
//     sumclass sum1, sum2;
//     int c;
//     cin >> sum1.num1 >> sum1.num2;
//     cout << sum1.num1+sum1.num2 << endl;
//     cin >> sum2.num1 >> sum2.num2;
//     cout << sum2.num1-sum2.num2 << endl;
// }

#include<iostream>
using namespace std;
class oddevenclass{
    public:
    int num;
};
int main(){
    oddevenclass oddeven;
    cin >> oddeven.num;
    if(oddeven.num%2==0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}