#include <iostream>
using namespace std;

int main(){
    int num;
    const int maxNum = 9999;

    cout << "Enter a number: ";
    cin >> num;

    if(num > maxNum){
        cout << "The maximum digits you can enter is four!";
    }else{
         if(num > 0){
            cout << "It is a positive number.";
        }else{
            cout << "It is a non-positive number.";
        }
    }
    return 0;
}
