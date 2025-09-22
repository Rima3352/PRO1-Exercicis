//Average

#include <iostream>
using namespace std;

int main(){
    double list;
    double sum = 0;
    double i = 0;

    while(cin >> list){
        sum = sum + list;
        i = i + 1;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum/i << endl;
}
