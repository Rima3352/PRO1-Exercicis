#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char coins;
    int rboard = 1;
    int cboard = 1;
    int sum = 0;

    while (cboard <= c) {
        rboard = 1;
        while (rboard <= r) {
            cin >> coins;
            sum += coins - '0';
            rboard++;
        }
        cboard++;
        
    }
    cout << sum << endl;
}
