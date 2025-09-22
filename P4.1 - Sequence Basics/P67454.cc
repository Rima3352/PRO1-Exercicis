#include <iostream>
using namespace std;

int main(){
    char lletra;
    int cont = 0;
    cin >> lletra;
    while (lletra != '.'){
        if (lletra == 'a'){
            cont++;
        }
        cin >> lletra;
    }
    cout << cont << endl;
}
