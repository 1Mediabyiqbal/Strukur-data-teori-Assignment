#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    // Menambahkan Elemen Ke Priority Queue
    pq.push(78);
    pq.push(51);
    pq.push(33);
    pq.push(48);
    pq.push(62);

    // Menghapus Elemen Dengan Prioritas Tertinggi
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}