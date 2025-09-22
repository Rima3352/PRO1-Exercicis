//Harmonic 2
//Dados n pares de naturales, calcular sus harmÃ³nicos 
//y calcular la diferencia entre estos dos.

#include <iostream>
using namespace std;

int main() {
    int n, m; //>=0

    while (cin >> n >> m) { //eof
        
        double Hdif = 0.0;
        //la diferencia va de m+1 hasta n
        for (double i = m + 1; i <= n; ++i) Hdif += 1 / i; 
        cout.setf(ios::fixed);
        cout.precision(10); 
        cout << Hdif << endl;
        
    }
}
