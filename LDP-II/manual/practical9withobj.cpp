#include<iostream>
using namespace std;
class conversion{
    public:
    float x, y;
    float convert(float x){
        return x*3.28084;
    }
};
int main(){
    conversion con;
    cin >> con.x;
    con.y = con.convert(con.x);
    cout << con.y << endl;
}