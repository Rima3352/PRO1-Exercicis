#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p, x, u, y, z;
    p = (n/10000)%10;
    u = (n/1000)%10;
    x = (n/100)%10;
    y = (n/10)%10;
    z = n%10;

    int total;
    total = u + x + y + z + p;

    cout << total << endl;
}
