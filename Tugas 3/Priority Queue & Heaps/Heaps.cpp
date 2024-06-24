#include <iostream>
#include <vector>
#include <algorithm> // Untuk std::swap

using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Konstruksi Heaps
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Menghapus Elemen Dengan Prioritas Tertinggi
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int arrData[] = {19, 21, 33, 28, 16, 31};
    vector<int> arr(arrData, arrData + sizeof(arrData) / sizeof(int));

    cout << "List Data Sebelum Diurutkan : ";
    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;

    heapSort(arr);

    cout << "List Data Setelah Diurutkan : ";
    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}