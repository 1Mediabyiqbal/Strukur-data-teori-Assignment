
# <h1 align="center">Hash Table</h1>
<p align="center">Muhammad Iqbal</p>
<p align="center">2311110013</p>
<p align="center">S1SD-04-A</p>

## I. Dasar Teori

<h3 align="justify">Pengertian Hash Table</h3>
<p align="justify">Hash table, atau tabel hash, adalah struktur data yang digunakan untuk menyimpan data secara asosiatif, artinya data disimpan dalam format array di mana setiap nilai data memiliki indeks uniknya sendiri. Akses data menjadi sangat cepat jika indeks data yang diinginkan diketahui. Menurut Singh, S. et al. (2022), hash table adalah struktur data yang efisien untuk menyimpan dan mengambil data dengan cepat. Hash table memetakan kunci data ke nilai indeks dalam array, yang kemudian digunakan untuk menyimpan data dalam array tersebut. Pencarian data dalam hash table sangat cepat karena nilai hash untuk kunci data dapat dihitung dengan cepat dan nilai hash ini digunakan untuk menentukan indeks dalam array tempat data disimpan.</p>
<p align = "Center"><img src = "https://www.bogotobogo.com/Algorithms/images/hash_table/open_addressing.png" alt = "Gambar" width = "450" height = "350"></p>
<h3 align="justify">Fungsi Hash Table</h3>
<p align="justify">Fungsi utama hash table adalah mempercepat pencarian data dari sejumlah besar data yang disimpan. Ini sangat relevan dengan meningkatnya volume data yang diproses oleh jaringan data global dan lokal. Hash table menyediakan solusi untuk mempercepat proses akses data dan memastikan data dapat dipertukarkan dengan aman.</p>
<p align="justify">Berikut Beberapa Fungsi Utama Hash Table :</p>
<ul>
    <li><p align="justify"><b>Penyimpanan Data Asosiatif :</b> Hash table memungkinkan Anda untuk menyimpan data dengan kunci unik dan dengan cepat mengambilnya kembali berdasarkan kuncinya.</p></li>
    <li><p align="justify"><b>Pencarian Data Yang Cepat :</b> Hash table menawarkan waktu pencarian yang sangat cepat, rata-rata O(1), dibandingkan dengan struktur data lain seperti pohon pencarian biner yang memiliki waktu pencarian rata-rata O(log n).</p></li>
    <li><p align="justify"><b>Penghematan Memori :</b> Hash table dapat menghemat memori dengan menyimpan data secara kompak, terutama jika kunci datanya pendek.</p></li>
    <li><p align="justify"><b>Implementasi Yang Mudah :</b> Hash table relatif mudah untuk diimplementasikan dan dipahami.</p></li>
</ul>
<h3 align="justify">Jenis-Jenis Hash Table :</h3>
<ul>
    <li><p align="justify"><b>Hash Table Statis :</b> Ukuran array hash table statis tidak dapat diubah setelah dibuat.</p></li>
    <li><p align="justify"><b>Hash Table Dinamis :</b> Ukuran array hash table dinamis dapat diubah secara otomatis saat data ditambahkan atau dihapus.</p></li>
    <li><p align="justify"><b>Hash Table Berantai :</b> Hash table berantai digunakan untuk menangani tabrakan, di mana dua kunci yang berbeda dipetakan ke indeks yang sama dalam array.</p></li>
    <li><p align="justify"><b>Pohon Hash :</b> Pohon hash adalah struktur data hibrida yang menggabungkan hash table dengan pohon pencarian biner.</p></li>
<h3 align="justify">Sistem Operasi Pada Hash Table</h3>
<p align="justify">Hash tables adalah struktur data yang sangat efisien untuk menyimpan dan mengambil data. Mereka menggunakan hash function untuk mengubah kunci menjadi indeks dalam array, yang memungkinkan akses cepat ke nilai yang terkait dengan kunci tersebut. <i>Chen, J. et al. (2019)</i> Hash table juga menawarkan waktu pencarian yang cepat dan dapat menyimpan data dalam jumlah besar secara efisien. Namun, hash table dapat mengalami tabrakan, di mana dua kunci yang berbeda dipetakan ke indeks yang sama dalam array. Tabrakan ini dapat memperlambat kinerja hash table.</p>
<p align="justify">Berikut Adalah Operasi Dasar Pada Hash Table :</p>
<h4 align="justify"><b>1. Hashing (Menghitung Hash Code)</b></h4>
<p align="justify">Hash function adalah fungsi yang mengubah kunci menjadi indeks dalam array. Fungsi hash harus mendistribusikan kunci secara merata untuk menghindari banyak tabrakan (collision).</p>
<h4 align="justify"><b>2. Inserting (Memasukkan Data)</b></h4>
<p align="justify">Proses Memasukkan Data Ke Dalam Hash Table :</p>
<ul>
    <li><p align="justify"><b>Hashing The Key :</b> Gunakan hash function untuk menghitung hash code dari kunci.</p></li>
    <li><p align="justify"><b>Index Calculation :</b> Gunakan hash code untuk menentukan indeks dalam array.</p></li>
    <li><p align="justify"><b>Handling Collisions :</b> Jika indeks sudah ditempati, gunakan metode penanganan tabrakan seperti chaining atau open addressing.</p></li>
</ul>
<h4 align="justify"><b>3. Searching (Mencari Data)</b></h4>
<p align="justify">Proses Pencarian Data Pada Hash Table :</p>
<ul>
    <li><p align="justify"><b>Hashing The Key :</b> Hitung hash code dari kunci yang dicari.</p></li>
    <li><p align="justify"><b>Index Calculation :</b> Tentukan indeks dari hash code.</p></li>
    <li><p align="justify"><b>Traversing (Jika Diperlukan) :</b> Jika terjadi tabrakan, telusuri entri yang bertabrakan hingga menemukan kunci yang sesuai atau mengkonfirmasi bahwa kunci tidak ada.</p></li>
</ul>
<h4 align="justify"><b>4. Deleting (Menghapus Data)</b></h4>
<p align="justify">Proses Penghapusan Data Pada Hash Table :</p>
<ul>
    <li><p align="justify"><b>Hashing The Key :</b> Hitung hash code dari kunci yang akan dihapus.</p></li>
    <li><p align="justify"><b>Index Calculation :</b> Tentukan indeks dari hash code.</p></li>
    <li><p align="justify"><b>Traversing (Jika Diperlukan) :</b> Jika terjadi tabrakan, telusuri entri yang bertabrakan hingga menemukan kunci yang sesuai.</p></li>
    <li><p align="justify"><b>Removing Entry :</b> Hapus entri tersebut, dan jika menggunakan open addressing, pastikan untuk menandai slot sebagai deleted (tergantung pada implementasi).</p></li>
</ul> 
<h4 align="justify"><b>5. Handling Collisions (Menangani Tabrakan)</b></h4>
<p align="justify">Metode Umum Untuk Menangani Tabrakan :</p>
<ul>
    <li><p align="justify"><b>Chaining :</b> Menggunakan linked list di setiap slot array untuk menyimpan beberapa elemen yang memiliki hash code yang sama.</p></li>
    <li><p align="justify"><b>Open Addressing :</b> Mencari slot kosong berikutnya di array menggunakan metode seperti linear probing, quadratic probing, atau double hashing.</p></li>
</ul>
<h4 align="justify"><b>6. Resizing (Mengubah Ukuran)</b></h4>
<p align="justify">Ketika hash table terlalu penuh, performa bisa menurun. Oleh karena itu, resizing diperlukan untuk membuat array baru yang lebih besar dan hitung ulang indeks untuk setiap elemen dalam hash table lama, lalu masukkan elemen-elemen tersebut ke dalam array baru.</p>
<h3 align="justify">Aplikasi Hash Table :</h3>
<ul>
    <li><p align="justify"><b>Basis Data :</b> Hash table digunakan dalam basis data untuk menyimpan dan mengambil data dengan cepat.</p></li>
    <li><p align="justify"><b>Kompilator :</b> Hash table digunakan dalam kompilator untuk menyimpan simbol dan informasi lainnya.</p></li>
    <li><p align="justify"><b>Interpreter :</b> Hash table digunakan dalam interpreter untuk menyimpan variabel dan nilai-nilainya.</p></li>
    <li><p align="justify"><b>Sistem Operasi :</b> Hash table digunakan dalam sistem operasi untuk menyimpan berbagai informasi, seperti tabel proses dan tabel memori.</p></li>
    <li><p align="justify"><b>Jaringan Komputer :</b> Hash table digunakan dalam jaringan komputer untuk menyimpan informasi routing dan caching data.</p></li>
</ul>
<h3 align="justify">Kelebihan Hash Table : </h3>
<ul>
    <li><p align="justify"><b>Efisiensi Waktu :</b> Hash table dapat mengakses data dengan cepat dan efisien.</p></li>
    <li><p align="justify"><b>Menghemat Ruang Penyimpanan :</b> Hash table dapat menghemat ruang penyimpanan dengan cara mengkonversi data menjadi nilai hash yang lebih kecil.</p></li>
    <li><p align="justify"><b>Mengurangi Waktu Pengembangan :</b> Hash table dapat mengurangi waktu pengembangan dengan cara mengurangi kompleksitas kode.</p></li>
</ul>
<h3 align="justify">Kekurangan Hash Table : </h3>
<ul>
    <li><p align="justify"><b>Collision :</b> Hash table dapat mengalami collision ketika dua key memiliki nilai hash yang sama.</p></li>
    <li><p align="justify"><b>Mengurangi Performa :</b> Hash table dapat mengurangi performa jika tidak digunakan dengan benar.</p></li>
    <li><p align="justify"><b>Mengurangi Keamanan :</b> Hash table dapat mengurangi keamanan jika tidak digunakan dengan benar.</p></li>
</ul>

## II. Contoh Program

### A. Contoh Program Hash Table 

```C++
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
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/547eecc0-f24c-4cf2-83ac-7a72f88a5c45)
#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/7d419bb0-ab1e-424b-bc8e-0780fdfae88c)

#### Penjelasan Program :
<p align="justify">Program ini mendefinisikan sebuah kelas bernama HashTable yang digunakan untuk menyimpan dan mengambil data menggunakan teknik hashing. Kelas HashTable memiliki dua metode, yaitu insert dan get. Metode insert digunakan untuk menyimpan data ke dalam tabel hash dengan menggunakan key dan value, sedangkan metode get digunakan untuk mengambil data dari tabel hash berdasarkan key yang diberikan.</p>
<p align="justify">Dalam fungsi main, program ini membuat sebuah objek HashTable bernama ht dan sebuah array of integers bernama nums yang berisi 10 elemen. Kemudian, program ini menggunakan metode insert untuk menyimpan nilai-nilai dari array nums ke dalam tabel hash. Setelah itu, program ini menggunakan metode get untuk mengambil nilai-nilai dari tabel hash dan mencetaknya ke layar. Hasilnya, program ini akan mencetak nilai-nilai dari array nums yang telah disimpan dalam tabel hash.</p>

## III. Kesimpulan

<p align="justify">HHash Table adalah struktur data yang digunakan untuk menyimpan dan mengakses data secara efisien. Hash Table beroperasi dengan mengubah key (kunci) menjadi nilai hash yang unik, sehingga memungkinkan akses cepat. Dengan Hash Table, pengguna dapat melakukan operasi seperti menambah data, menghapus data, mencari data berdasarkan kunci, dan mencari data berdasarkan rentang nilai dengan lebih cepat dan efisien.</p>
<p align="justify">Hash Table juga memiliki beberapa kelebihan, seperti efisiensi dalam penggunaan ruang penyimpanan, pengurangan waktu pengembangan, dan peningkatan performa aplikasi. Namun, Hash Table juga memiliki beberapa kelemahan, seperti kemungkinan terjadinya collision ketika dua key menghasilkan nilai hash yang sama, potensi pengurangan keamanan jika tidak digunakan dengan benar, dan penurunan performa jika tidak diimplementasikan dengan tepat. Oleh karena itu, Hash Table harus diterapkan dengan benar dan secara tepat agar dapat meningkatkan performa aplikasi serta menghemat waktu.</p>

## IV. Referensi

#### [1] Singh, S., & Kumar, R. An Efficient Hash Table Based Data Structure for IoT Applications. IEEE Access, 2022.
#### [2] Chen, J., & Li, Y. An Improved Hash Table Based Data Structure for Network Applications. IEEE Transactions on Network and Information Systems Management, 2019.