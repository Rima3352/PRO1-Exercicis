//Reversed number

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    if (num == 0){
        cout << '0';}
    else {
        while(num > 0){
            int inv = num%10;
            cout << inv;
            num = num/10;
        }
    }
    cout << endl;

    }
