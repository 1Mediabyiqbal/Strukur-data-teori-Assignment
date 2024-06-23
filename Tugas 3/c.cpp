#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n - 1);
}

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2);
    }
}

#define RUN_COUNTDOWN 1 // Set to 1 to run countdown, 0 to run functionA/functionB

#if RUN_COUNTDOWN
int main() {
    cout << "Rekursif langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
#else
int main() {
    int num = 3;
    cout << "Rekursif tidak langsung: ";
    functionA(num);
    return 0;
}
#endif
