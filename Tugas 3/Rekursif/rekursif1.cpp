#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan Nilai N : ";
    cin >> n;

    long long result = factorial(n);
    cout << "Nilai Factorial Dari Bilangan " << n << " ==> " << result << endl;

    return 0;
}
