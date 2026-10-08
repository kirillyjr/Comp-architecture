#include <iostream>
using namespace std;


void f1() {
    int a;
    cin >> a;
    while (a != 0) {
        for (int i = 0; i < 8; i++) {
            cout << (a & 1) << endl;
            a >>= 1;
        }
    }
}

void f2() {
    int b = 1, a=-1;
    do {
        a = (a<<1) | b;
        cin >> b;
    } while (b==1 || a==-1);
    cout << a << endl;
}

void dec_to_bin(int a) {
    int p = 1;
    while (p * 2 <= a) p *= 2;
    do {
        cout << a / p % 2;
        p /= 2;
    } while (p > 0);
    cout << endl;
}

int bin_to_dec_stream() {
    int a = 0, b;
    while (cin >> b && (b == 0 || b == 1))
        a = (a << 1) | b;
    return a;
}

int main() {

    //f1(); - положительные
    //f2() - отриц


}

