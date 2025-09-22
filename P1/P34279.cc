#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    s=s+1;
    if (s>=60){
        m=m+(s/60);
        s=s%60;
    }
    if (m>=60){
        h=h+(m/60);
        m=m%60;
    }
    if (h>=24){
        h=h%24;
    }

    if(h<=9){
        cout<<"0"<<h<<":";
    }else{
        cout<<h<<":";
    }
    if(m<=9){
        cout<<"0"<<m<<":";
    }else{
        cout<<m<<":";
    }
    if(s<=9){
        cout<<"0"<<s<<endl;
    }else{
        cout<<s<<endl;
    }
}
