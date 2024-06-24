#include <iostream>
#include <vector>
#include <map>

using namespace std;

class HashTable {
private:
    map<int, int> table;

public:
    void insert(int key, int value) {
        // Menyimpan Data Ke Tabel Hash
        table[key] = value;
    }

    int get(int key) {
        if (table.find(key) != table.end()) {
            return table[key];
        }
        return -1;
    }
};

int main() {
    // Membuat Objek Hash Table
    HashTable ht;

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++) {
        // Menyimpan Nilai-Nilai Ke Hash Table
        ht.insert(nums[i], nums[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << "Nums[" << i << "] = " << ht.get(nums[i]) << endl;
    }

    return 0;
}