# <h1 align="center">Priority Queue & Heaps</h1>
<p align="center">Muhammad Iqbal</p>
<p align="center">2311110013</p>
<p align="center">S1SD-04-A</p>

## I. Dasar Teori

<p align="justify">Priority Queue (antrian prioritas) adalah struktur data yang menyimpan elemen-elemen dengan berbagai tingkat prioritas, di mana elemen dengan prioritas tertinggi akan dikeluarkan terlebih dahulu. Heap adalah struktur data yang sering digunakan untuk mengimplementasikan priority queue. Menurut Sari et al. (2021), priority queue memiliki peran penting dalam algoritma pencarian jalur terpendek seperti algoritma Dijkstra dan algoritma A*. Dengan menggunakan struktur data heap, algoritma-algoritma ini dapat mengeksplorasi jalur yang paling menjanjikan terlebih dahulu, sehingga menghasilkan solusi yang lebih optimal dalam waktu yang lebih cepat.</p>
<h3 align="justify">Heap Memiliki Sifat Ordering (Pengurutan) :</h3>
<ul>
    <li><p align="justify"><b>Max-Heap :</b> Setiap node memiliki nilai yang lebih kecil atau sama dengan nilai anak-anaknya.</p></li>
    <li><p align="justify"><b>Min-Heap :</b> Menurut Wulandari et al. (2023), dalam jurnal mereka, min-heap adalah jenis struktur data heap di mana setiap node memiliki nilai yang lebih kecil atau sama dengan nilai dari anak-anaknya. Mereka menjelaskan bahwa min-heap digunakan secara efisien untuk mengimplementasikan algoritma Huffman coding. Algoritma ini dirancang untuk menghasilkan kode kompresi data yang optimal dengan mempertimbangkan frekuensi kemunculan karakter dalam data.</p></li>

<h3 align="justify"><b>Operasi Dasar Priority Queue :</b></h3>
<ul>
    <li><p align="justify"><b>Insert =</b> Memasukkan elemen baru.</p></li>
    <li><p align="justify"><b>ExtractMax =</b> Menghapus elemen dengan prioritas tertinggi.</p></li>
    <li><p align="justify"><b>DecreaseKey =</b> Menurunkan prioritas elemen.</p></li>
    <li><p align="justify"><b>IncreaseKey =</b> Menaikkan prioritas elemen.</p></li>
</ul>

<h3 align="justify"><b>Kelebihan Priority Queue :</b></h3>
<ul>
    <li><p align="justify"><b>Efisiensi :</b> Priority queue memungkinkan akses dan penghapusan elemen dengan prioritas tertinggi dengan efisiensi waktu O(log n), di mana n adalah jumlah elemen dalam antrian.</p></li>
    <li><p align="justify"><b>Fleksibilitas :</b> Priority queue dapat digunakan untuk menyimpan elemen dengan berbagai jenis prioritas.</p></li>
    <li><p align="justify"><b>Kemudahan Penggunaan :</b> Adanya kelas std::priority_queue yang mudah digunakan untuk mengimplementasikan priority queue.</p></li>
</ul>
<h3 align="justify"><b>Kekurangan Priority Queue :</b></h3>
<ul>
    <li><p align="justify"><b>Kompleksitas :</b> Implementasi priority queue lebih kompleks dibandingkan array dan list.</p></li>
    <li><p align="justify"><b>Penggunaan Memori :</b> Priority queue umumnya membutuhkan lebih banyak memori dibandingkan array dan list.</p></li>
</ul>

## II. Contoh Program

### A. Contoh Program ==> Priority Queue

```C++
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
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/5e33d2aa-03bb-4f6f-8b1f-4e79a3f22248)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/b8c6fb94-4e9f-4933-bbb4-637903de811d)

#### Penjelasan Program :
<p align="justify">Program ini menggunakan struktur data priority queue untuk menyimpan dan mengolah data. Priority queue adalah sebuah struktur data yang memungkinkan kita untuk menyimpan elemen-elemen dengan prioritas tertentu. Dalam program ini, kita membuat sebuah priority queue bernama pq dan menambahkan 5 elemen ke dalamnya, yaitu 78, 51, 33, 48, dan 62.</p>
<p align="justify">Kemudian, program ini menggunakan perulangan while untuk menghapus elemen-elemen dari priority queue. Perulangan ini akan berlangsung selama priority queue tidak kosong. Pada setiap iterasi, program akan mengambil elemen dengan prioritas tertinggi dari priority queue menggunakan fungsi top, mencetaknya menggunakan fungsi cout, dan kemudian menghapusnya menggunakan fungsi pop. Hasilnya, program akan mencetak elemen-elemen dalam urutan prioritas tertinggi, yaitu 78 62 51 48 33.</p>

### B. Contoh Program ==> Heaps

```C++
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
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/1ffa401a-7ac6-443f-8303-e063465b3777)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/72f181e9-a8c0-45b3-ae38-6e233838be9a)

#### Penjelasan Program :
<p align="justify">Program ini menggunakan algoritma heap sort untuk mengurutkan array integer. Heap sort adalah algoritma pengurutan yang memanfaatkan struktur data heap untuk menyusun elemen-elemen dalam array. Program ini memiliki dua fungsi utama: heapify dan heapSort. Fungsi heapify digunakan untuk membangun heap dari array, sedangkan fungsi heapSort digunakan untuk mengurutkan array dengan metode heap sort.</p>
<p align="justify">Dalam fungsi main, program ini membuat sebuah array integer yang terdiri dari 6 elemen: 19, 21, 33, 28, 16, dan 31. Program ini pertama-tama mencetak array tersebut sebelum pengurutan. Setelah itu, program memanggil fungsi heapSort untuk mengurutkan array. Fungsi heapSort akan membangun heap dari array tersebut, kemudian menghapus elemen-elemen dengan prioritas tertinggi dari heap dan mengurutkannya dalam array. Akhirnya, program mencetak array yang telah diurutkan menjadi 16, 19, 21, 28, 31, dan 33.</p>

## III. Kesimpulan

<p align="justify">Priority queue adalah struktur data yang berguna untuk menyimpan elemen-elemen dengan berbagai tingkat prioritas. Heap adalah struktur data yang sering digunakan untuk mengimplementasikan priority queue. Dengan menggunakan kelas std::priority_queue, implementasi priority queue menjadi lebih mudah. Heap memungkinkan operasi penyisipan dan penghapusan elemen dilakukan dalam waktu logaritmik, yang sangat berguna dalam berbagai algoritma. Memahami Priority Queue dan Heap dapat meningkatkan efisiensi dan efektivitas algoritma yang kita gunakan untuk menyelesaikan berbagai masalah.</p>

## IV. Referensi

#### [1] Sari, N. A., Putri, R. D., & Rahardjo, S. Pemanfaatan Priority Queue untuk Optimasi Rute pada Algoritma Pencarian Jalur Terpendek. Jurnal Sains dan Teknologi Komputer, 2021.
#### [2] Wulandari, C. A., Raharjo, S., & Setiawan, D. Implementasi Priority Queue Berbasis Min-Heap untuk Optimasi Algoritma Huffman Coding. Jurnal Sains dan Teknologi Komputer, 2023.