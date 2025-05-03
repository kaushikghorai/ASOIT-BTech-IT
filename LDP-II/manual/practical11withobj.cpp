#include<iostream>
using namespace std;
class sorting{
    public:
    int arr1[3], i;
    void sortarr(int *arr){
        for(i=0; i<2; i++){
            if(arr[i]<arr[i+1]){
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
                i=-1;
            }
        }
    }
};
int main(){
    sorting s1;
    int i;
    cout << "Enter three values: ";
    for(i=0; i<3; i++){
        cin >> s1.arr1[i];
    }
    s1.sortarr(s1.arr1);
    cout << "your entries in decreasing order is" << endl;
    for(i=0; i<3; i++){
        cout << s1.arr1[i] << "\n";
    }
    return 0;
}