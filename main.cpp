#include <iostream>
using namespace std;



// 1. 2 -> 10
unsigned f1() {
    unsigned a = 0, b;
    while (cin >> b && (b == 0 || b == 1))
        a = a * 2 + b;
    return a;
}

// 2. 2 -> 10, сдвиги
unsigned f2() {
    unsigned a = 0, b;
    while (cin >> b && (b == 0 || b == 1))
        a = (a << 1) | b;
    return a;
}

// 3. 10 -> 2, умножение и деление
void f3() {
    unsigned a;
    cin >> a;
    int p = 1;
    while (p * 2 <= a) p *= 2;
    do {
        cout << a / p % 2;
        p /= 2;
    } while (p > 0);
    cout << endl;
}

// 4. 10 -> 2, сдвиги
void f4() {
    unsigned a;
    cin >> a;
    int k = 0;
    while ((a >> (k + 1)) > 0) k++;
    for (int i = k; i >= 0; i--)
        cout << ((a >> i) & 1);
    cout << endl;
}



// 5. отрицательное 10 -> 2 доп. код
void f5() {
    int a;
    cin >> a;
    int n = 8;
    for (int i = n - 1; i >= 0; i--)
        cout << ((a >> i) & 1);
    cout << endl;
}

// 6. 2 доп. код -> отрицательное 10
int f6() {
    int a = -1, b;
    while (cin >> b && (b == 0 || b == 1))
        a = (a << 1) | b;
    return a;
}

int main() {

     cout << f1() << endl;   // ввод: 1 0 1 1 2    -> 11
     cout << f2() << endl;   // ввод: 1 0 1 1 2    -> 11
     f3();                   // ввод: 11           -> 1011
     f4();                   // ввод: 11           -> 1011
     f5();                   // ввод: -3           -> 11111101
     cout << f6() << endl;   // ввод: 1 1 1 1 1 1 0 1 2 -> -3
}