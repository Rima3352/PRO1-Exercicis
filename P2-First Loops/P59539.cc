//Harmonic numbers
//Dado un natural proporcionar el número 
//harmónico correspondiente al entero introducido
#include <iostream>
using namespace std;

int main() {  
    int num; //>=0
    cin >> num;
    double sum = 0;
    while (num > 0){
        sum = sum + (1/double(num));
        --num;
    }
    cout.setf(ios::fixed);
    cout.precision(4);
//La suma de todas las fracciones hasta aquella cuyo
//divisor es num    
    cout << sum << endl;
}
