//Control C201C
//Dado un natural y una conjunto de naturales
//proporcionar el número de naturales que son
//múltiplos del primer natural proporcionado
#include <iostream>
using namespace std;

int main(){
    int mult;
    cin >> mult;
    int i = 0;
    int num;
    while(cin >> num){
        //La divisón entre num y mult no tiene resto
        if(num%mult == 0){
            i = i + 1;
        }
    }
    cout << i << endl;
}
