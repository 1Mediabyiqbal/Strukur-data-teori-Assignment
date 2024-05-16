#include <iostream>
#include <vector>
#include <algorithm>

// Fungsi binary search
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Cek apakah target ada di tengah
        if (arr[mid] == target) {
            return mid;
        }

        // Jika target lebih besar, abaikan bagian kiri
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Jika target lebih kecil, abaikan bagian kanan
        else {
            right = mid - 1;
        }
    }

    // Jika target tidak ditemukan
    return -1;
}

int main() {
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;

    // Pastikan array sudah terurut
    std::sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Elemen ditemukan pada indeks " << result << std::endl;
    } else {
        std::cout << "Elemen tidak ditemukan" << std::endl;
    }

    return 0;
}
