
TUGAS
Muhammad Iqbal (NIM : 2311110013)

Soal SUBCPMK 2
Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut
JAWABAN
Merge sort
```c++
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
   int n1 = m - l + 1;
   int n2 = r - m;

   int L[n1], R[n2];

   for (int i = 0; i < n1; i++)
       L[i] = arr[l + i];
   for (int j = 0; j < n2; j++)
       R[j] = arr[m + 1 + j];

   int i = 0, j = 0, k = l;
   while (i < n1 && j < n2) {
       if (L[i] <= R[j]) {
           arr[k] = L[i];
           i++;
       } else {
           arr[k] = R[j];
           j++;
       }
       k++;
   }

   while (i < n1) {
       arr[k] = L[i];
       i++;
       k++;
   }
   while (j < n2) {
       arr[k] = R[j];
       j++;
       k++;
   }
}

// Fungsi rekursif untuk melakukan Merge Sort pada array input
void mergeSort(int arr[], int l, int r) {
   if (l < r) {
       int m = l + (r - l) / 2;
       mergeSort(arr, l, m);      
       mergeSort(arr, m + 1, r);  
       merge(arr, l, m, r);       
   }
}

int main() {
   int arr[] = {12, 11, 13, 5, 6, 7};
   int n = sizeof(arr) / sizeof(arr[0]);

   cout << "Array awal: ";
   for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
   cout << endl;

   mergeSort(arr, 0, n - 1);

   cout << "Array setelah diurutkan: ";
   for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
   cout << endl;

   return 0;
}
```
Output
image

Penjelasan:
Merge Sort adalah salah satu algoritma pengurutan yang menggunakan pendekatan divide and conquer (pembagian dan penaklukan). Proses pengurutan dalam Merge Sort dapat diuraikan menjadi tiga langkah utama: membagi (divide), menaklukkan (conquer), dan menggabungkan (merge). ini penjelasan lebih detail dari setiap langkahnya:

Membagi (Divide) : Algoritma ini membagi array input menjadi dua bagian yang kira-kira sama besar. Proses pembagian ini dilakukan secara rekursif hingga setiap subarray hanya berisi satu elemen. Pada titik ini, setiap subarray dengan satu elemen sudah dianggap terurut karena tidak ada elemen lain yang perlu dibandingkan.
Menaklukkan (Conquer): Setelah array dibagi menjadi subarray-subarray kecil, algoritma mulai mengurutkan subarray-subarray tersebut. Karena setiap subarray dengan satu elemen sudah terurut, langkah ini secara efektif mempersiapkan data untuk proses penggabungan.
Menggabungkan (Merge) : Langkah terakhir adalah menggabungkan subarray-subarray yang sudah terurut menjadi satu array yang terurut. Proses penggabungan ini dilakukan dengan membandingkan elemen-elemen dari dua subarray yang sudah terurut dan menempatkan elemen-elemen tersebut dalam urutan yang benar ke dalam array yang baru.
Soal SubCPMK 3
Buatlah fungsi dari salah satu algoritma searching pada soal nomor 1, dan berikan penjelasan pada program tersebut
JAWABAN
Binary Search
```c++
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
```
Output
image

Penjelasan
Binary search adalah algoritma pencarian yang efisien untuk menemukan posisi elemen dalam array yang sudah diurutkan. Algoritma ini bekerja dengan membagi array menjadi dua bagian pada setiap langkah, sehingga mengurangi jumlah elemen yang perlu diperiksa secara signifikan. Dalam implementasi binary search di C++, algoritma ini menggunakan dua variabel, left dan right, yang menunjukkan batas kiri dan kanan dari bagian array yang sedang dipertimbangkan. Selama nilai left tidak melebihi right, algoritma menghitung indeks tengah (mid) dan membandingkan nilai elemen di posisi ini dengan elemen yang dicari (target). Jika elemen di tengah sama dengan target, algoritma mengembalikan indeks tengah sebagai posisi target. Jika target lebih besar dari elemen tengah, algoritma memperbarui batas kiri (left) menjadi mid + 1, sehingga mengabaikan setengah bagian kiri dari array. Sebaliknya, jika target lebih kecil, batas kanan (right) diperbarui menjadi mid - 1, sehingga mengabaikan setengah bagian kanan dari array. Proses ini berulang hingga target ditemukan atau batas pencarian habis, dalam hal ini algoritma mengembalikan -1 sebagai tanda bahwa target tidak ditemukan. Karena setiap langkah binary search mengurangi ukuran bagian yang dipertimbangkan menjadi setengahnya, kompleksitas waktu algoritma ini adalah O(log n), membuatnya sangat efisien untuk pencarian dalam array yang besar.

SubCPMK 4
Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct!

JAWABAN
```c++
#include <iostream>
#include <string>

// Mendeklarasikan struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
    double ipk;
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mhs1, mhs2;

    // Mengisi data untuk mhs1
    mhs1.nama = "Andi";
    mhs1.umur = 20;
    mhs1.jurusan = "Teknik Informatika";
    mhs1.ipk = 3.75;

    // Mengisi data untuk mhs2
    mhs2.nama = "Budi";
    mhs2.umur = 21;
    mhs2.jurusan = "Sistem Informasi";
    mhs2.ipk = 3.85;

    // Menampilkan data mahasiswa 1
    std::cout << "Data Mahasiswa 1:" << std::endl;
    std::cout << "Nama: " << mhs1.nama << std::endl;
    std::cout << "Umur: " << mhs1.umur << std::endl;
    std::cout << "Jurusan: " << mhs1.jurusan << std::endl;
    std::cout << "IPK: " << mhs1.ipk << std::endl;
    std::cout << std::endl;

    // Menampilkan data mahasiswa 2
    std::cout << "Data Mahasiswa 2:" << std::endl;
    std::cout << "Nama: " << mhs2.nama << std::endl;
    std::cout << "Umur: " << mhs2.umur << std::endl;
    std::cout << "Jurusan: " << mhs2.jurusan << std::endl;
    std::cout << "IPK: " << mhs2.ipk << std::endl;

    return 0;
}
```
OUTPUT
image

Penjelasan
Program di atas adalah contoh sederhana penggunaan struct dalam bahasa pemrograman C++. Dalam program tersebut, kita mendefinisikan sebuah struktur bernama Mahasiswa, yang memiliki empat anggota: nama, umur, jurusan, dan ipk, masing-masing dengan tipe data yang sesuai seperti std::string untuk nama dan jurusan, int untuk umur, dan double untuk IPK. Setelah mendefinisikan struktur tersebut, kita membuat dua objek mhs1 dan mhs2 dari tipe Mahasiswa di dalam fungsi utama. Kemudian, data untuk masing-masing objek diisi dengan nilai yang sesuai untuk nama, umur, jurusan, dan IPK. Data mahasiswa kemudian ditampilkan ke layar menggunakan std::cout, mencakup informasi seperti nama, umur, jurusan, dan IPK masing-masing mahasiswa. Dengan menggunakan struct, kita dapat mengorganisir dan mengelola data yang terkait secara logis, membuat kode lebih terstruktur dan mudah dibaca. Program tersebut mengilustrasikan bagaimana struct dapat digunakan dalam C++ untuk mengelompokkan informasi terkait bersama-sama dalam satu unit yang koheren.

Soal SubCPMK 5
Buatlah sebuah program untuk mengecek apakah linked list adalah sebuah palindrom

JAWABAN
```c++
#include <iostream>
#include <stack>

// Definisi simpul dalam linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen di depan linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Fungsi untuk mengecek apakah linked list adalah sebuah palindrom
bool isPalindrome(Node* head) {
    std::stack<int> s;
    Node* temp = head;

    // Menyimpan data dari linked list ke dalam stack
    while (temp != nullptr) {
        s.push(temp->data);
        temp = temp->next;
    }

    // Membandingkan data dari linked list dengan stack
    temp = head;
    while (temp != nullptr) {
        int top = s.top();
        s.pop();
        if (temp->data != top) {
            return false;
        }
        temp = temp->next;
    }

    return true;
}

// Fungsi untuk menampilkan linked list
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    // Membuat linked list: 1->2->3->2->1
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    std::cout << "Linked list: ";
    printList(head);

    if (isPalindrome(head)) {
        std::cout << "Linked list adalah sebuah palindrom" << std::endl;
    } else {
        std::cout << "Linked list bukan sebuah palindrom" << std::endl;
    }

    return 0;
}
```
Output
image

Penjelasan
Program membuat linked list dengan elemen 1 -> 2 -> 3 -> 2 -> 1, dan menggunakan stack untuk menyimpan nilai dari setengah pertama linked list. Kemudian, program membandingkan nilai dari setengah kedua linked list dengan nilai yang diambil dari stack. Jika semua nilai cocok, maka linked list tersebut adalah palindrom. Sebagai hasilnya, program mencetak "Linked list adalah palindrom."

Soal SubCPMK 6
Tulislah sebuah program untuk mensortir sebuah stack, sehingga item dengan nilai terkecil menjadi top pada stack tersebut! Diperbolehkan menggunakan tambahan temporary stack, namun tidak diperbolehkan untuk menyalin dari struktur data yang lain seperti array. Program stack yang dibuat dapat menggunakan operasi stack seperti push, pop, peek, dan isEmpty

JAWABAN
```c++
#include <iostream>
#include <stack>

// Fungsi untuk mengurutkan stack
void sortStack(std::stack<int>& s) {
    std::stack<int> tempStack;

    while (!s.empty()) {
        int temp = s.top();
        s.pop();

        // Pindahkan elemen dari stack ke temporary stack jika temporary stack kosong
        if (tempStack.empty()) {
            tempStack.push(temp);
        } else {
            // Pindahkan elemen dari stack ke temporary stack hingga menemukan posisi yang sesuai
            while (!tempStack.empty() && tempStack.top() > temp) {
                s.push(tempStack.top());
                tempStack.pop();
            }
            tempStack.push(temp);
        }
    }

    // Salin kembali elemen dari temporary stack ke stack asli
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

// Fungsi untuk menampilkan stack
void printStack(std::stack<int> s) {
    std::cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::stack<int> stack;

    // Menambahkan elemen ke dalam stack
    stack.push(30);
    stack.push(-5);
    stack.push(18);
    stack.push(14);
    stack.push(-3);

    std::cout << "Stack sebelum diurutkan:\n";
    printStack(stack);

    // Mengurutkan stack
    sortStack(stack);

    std::cout << "\nStack setelah diurutkan:\n";
    printStack(stack);

    return 0;
}
```
Output
image

Penjelasan
Program yang disajikan adalah implementasi dalam bahasa C++ untuk mengurutkan sebuah stack sehingga elemen dengan nilai terkecil menjadi elemen teratas (top) dari stack tersebut. Pendekatan yang digunakan dalam program ini didasarkan pada prinsip penyusunan ulang elemen-elemen stack dengan memanfaatkan sebuah temporary stack.

Fungsi sortStack bertanggung jawab untuk melakukan pengurutan. Prosesnya dimulai dengan mengambil elemen dari stack asli satu per satu, sambil mempertahankan urutan menaik pada temporary stack. Setelah stack asli kosong, elemen-elemen yang telah diurutkan di temporary stack dipindahkan kembali ke stack asli, sehingga stack asli terurut dengan elemen terkecil berada di bagian atas.

Fungsi printStack digunakan untuk menampilkan isi dari stack sebelum dan setelah pengurutan. Sedangkan di dalam fungsi main, beberapa elemen ditambahkan ke dalam stack, kemudian stack ditampilkan sebelum dan setelah diurutkan. Dengan menggunakan metode ini, program dapat memberikan hasil yang terurut secara efisien tanpa memerlukan struktur data tambahan seperti array.

Soal SubCPMK 7
Sebuah selter hewan terlantar, yang mana hanya menerima kucing dan anjing, menerapkan konsep “first in, first out” dalam proses adopsi. Orang-orang yang hendak mengadopsi harus mengikuti aturan berikut: 1) mengadopsi hewan yang paling “tua” (berdasarkan waktu masuk ke selter) dan tidak dapat memilih kucing atau anjing; 2) memilih antara kucing atau anjing, namun akan menerima yang paling tua. Buatlah data struktur untuk mengimplementasikan kondisi tersebut, silahkan menggunakan beberapa operasi queue seperti enquee, dequeueAny, dequeueDog, dan dequeueCat

JAWABAN
```c++
#include <iostream>
#include <queue>
#include <string>
#include <ctime>

// Struktur data untuk menyimpan informasi hewan
struct Animal {
    std::string type;
    time_t entryTime;

    Animal(std::string t, time_t time) : type(t), entryTime(time) {}
};

// Kelas Shelter untuk mengelola adopsi hewan
class Shelter {
private:
    std::queue<Animal> dogQueue;
    std::queue<Animal> catQueue;
    time_t currentTime;

public:
    Shelter() {
        currentTime = time(nullptr);
    }

    // Operasi untuk menambahkan hewan ke dalam shelter
    void enqueue(std::string type) {
        if (type == "dog") {
            dogQueue.push(Animal(type, currentTime++));
        } else if (type == "cat") {
            catQueue.push(Animal(type, currentTime++));
        } else {
            std::cout << "Hanya menerima kucing atau anjing.\n";
        }
    }

    // Operasi untuk mengadopsi hewan apapun yang paling tua
    std::string dequeueAny() {
        if (dogQueue.empty() && catQueue.empty()) {
            return "Shelter kosong.";
        } else if (dogQueue.empty()) {
            std::string type = catQueue.front().type;
            catQueue.pop();
            return "Anda telah mengadopsi " + type;
        } else if (catQueue.empty()) {
            std::string type = dogQueue.front().type;
            dogQueue.pop();
            return "Anda telah mengadopsi " + type;
        } else {
            if (dogQueue.front().entryTime < catQueue.front().entryTime) {
                std::string type = dogQueue.front().type;
                dogQueue.pop();
                return "Anda telah mengadopsi " + type;
            } else {
                std::string type = catQueue.front().type;
                catQueue.pop();
                return "Anda telah mengadopsi " + type;
            }
        }
    }

    // Operasi untuk mengadopsi anjing tertua
    std::string dequeueDog() {
        if (dogQueue.empty()) {
            return "Tidak ada anjing di shelter.";
        } else {
            std::string type = dogQueue.front().type;
            dogQueue.pop();
            return "Anda telah mengadopsi anjing.";
        }
    }

    // Operasi untuk mengadopsi kucing tertua
    std::string dequeueCat() {
        if (catQueue.empty()) {
            return "Tidak ada kucing di shelter.";
        } else {
            std::string type = catQueue.front().type;
            catQueue.pop();
            return "Anda telah mengadopsi kucing.";
        }
    }
};

int main() {
    Shelter shelter;

    shelter.enqueue("dog");
    shelter.enqueue("cat");
    shelter.enqueue("dog");
    shelter.enqueue("cat");

    std::cout << shelter.dequeueAny() << std::endl;
    std::cout << shelter.dequeueDog() << std::endl;
    std::cout << shelter.dequeueCat() << std::endl;
    std::cout << shelter.dequeueAny() << std::endl;

    return 0;
}
```
output
image

Dalam program ini, kita menggunakan dua queue terpisah untuk menyimpan antrian anjing dan kucing. Setiap kali hewan ditambahkan ke dalam shelter (enqueue), kita menyimpan jenis hewan dan waktu masuk ke dalam shelter. Kemudian, operasi dequeueAny akan memeriksa antrean anjing dan kucing untuk mengeluarkan hewan tertua. Operasi dequeueDog dan dequeueCat mengeluarkan anjing atau kucing tertua dari antrian masing-masing.
