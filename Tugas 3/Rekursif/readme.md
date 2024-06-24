
# <h1 align="center">Rekursif</h1>
<p align="center">Muhammad Iqbal</p>
<p align="center">2311110013</p>
<p align="center">S1SD-04-A</p>

## I. Dasar Teori

<p align="justify">Rekursif adalah konsep dalam pemrograman yang memungkinkan suatu fungsi memanggil dirinya sendiri untuk menghasilkan suatu output. Rekursif sering digunakan untuk menghitung nilai faktorial, deret Fibonacci, dan lain-lain. Menurut Muhammad Fadhilah et al. (2018), rekursif adalah konsep dalam pemrograman yang memungkinkan suatu fungsi memanggil dirinya sendiri untuk menghasilkan suatu output. Rekursif digunakan untuk menghitung nilai faktorial, deret Fibonacci, dan lain sebagainya.</p>

<h3 align="justify">Fungsi Rekursif :</h3>
<ul>
    <li><p align="justify"><b>Basis Of Recursion :</b> Fungsi rekursif mempunyai suatu nilai dasar yang tidak memerlukan panggilan rekursif lagi. Basis of recursion adalah suatu nilai yang tidak memerlukan panggilan rekursif lagi.</p></li>
    <li><p align="justify"><b>Recursive Call :</b> Fungsi rekursif memanggil dirinya sendiri untuk menghasilkan suatu output. Recursive call adalah suatu panggilan fungsi rekursif yang memanggil dirinya sendiri.</p></li>
</ul>

<p align="justify">Menurut Indah Sari et al. (2023), algoritma rekursif umumnya lebih mudah dipahami dan diimplementasikan dibandingkan algoritma iteratif untuk menghitung faktorial bilangan besar. Namun, algoritma iteratif biasanya lebih efisien dalam hal konsumsi memori dan mengurangi risiko stack overflow.

<h4 align="justify">Contoh Rekursif Untuk Menghitung Nilai Faktorial :</h3>

```C++
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}
```
<p align="justify">Dalam contoh di atas, fungsi faktorial memanggil dirinya sendiri untuk menghitung nilai faktorial. Basis of recursion adalah nilai 0, karena nilai 0 tidak memerlukan panggilan rekursif lagi. Recursive call adalah panggilan fungsi faktorial dengan nilai n-1 sebagai parameter.</p>

<h4 align="justify">Contoh Rekursif Untuk Menghitung Nilai Fibonacci :</h3>

```C++
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
```
<p align="justify">Pada contoh di atas, fungsi fibonacci memanggil dirinya sendiri untuk menghitung nilai Fibonacci. Basis rekursi adalah nilai 0 dan 1, karena nilai-nilai ini tidak memerlukan panggilan rekursif lagi. Panggilan rekursif terjadi ketika fungsi fibonacci dipanggil dengan parameter n-1 dan n-2.</p>

<h3 align="justify">Kelebihan Rekursif :</h3>
<ul>
    <li><p align="justify"><b>Sederhana :</b> Rekursif sangat mudah digunakan dan dipahami.</p></li>
    <li><p align="justify"><b>Efisien :</b> Rekursif dapat menghematkan memori dan waktu eksekusi.</p></li>
    <li><p align="justify"><b>Flexibel :</b> Rekursif dapat digunakan untuk menghitung nilai faktorial, menghitung nilai Fibonacci, dan lain-lain.</p></li>
</ul>
<h3 align="justify">Kekurangan Rekursif :</h3>
<ul>
    <li><p align="justify"><b>Tidak Efisien :</b> Rekursif dapat menghabiskan memori dan waktu eksekusi jika digunakan secara berlebihan.</p></li>
    <li><p align="justify"><b>Tidak Stabil :</b> Rekursif dapat menyebabkan error jika digunakan secara tidak benar.</p></li>
    <li><p align="justify"><b>Tidak Scalable :</b> Rekursif dapat menjadi tidak efisien jika digunakan untuk menghitung nilai besar.</p></li>
</ul>

## II. Contoh Program

### A. Contoh Program  Rekursif Factorial 

```C++
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
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/c4f2c291-1512-43c7-9bf5-9af599dc51b5)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/689fce5b-3337-4caf-b850-09d31520c425)

### Penjelasan Program :
<p align="justify">Kita menggunakan fungsi factorial untuk menghitung faktorial dari suatu nilai. Fungsi factorial menggunakan rekursif untuk melakukan perhitungan tersebut. Jika nilai n adalah 0, maka fungsi mengembalikan nilai 1. Jika nilai n bukan 0, fungsi mengembalikan nilai n dikalikan dengan hasil rekursif dari fungsi factorial dengan nilai n-1. Dalam fungsi main, pengguna diminta untuk memasukkan nilai n. Kemudian, kita menggunakan fungsi factorial untuk menghitung faktorial dari nilai n tersebut.

### B. Contoh Program Rekursif Fibonacci

```C++
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Masukkan Nilai N : ";
    cin >> n;

    int result = fibonacci(n);
    cout << "Deret Fibonacci Ke-" << n << " ==> " << result << endl;

    return 0;
}
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/cd9402df-ca5e-4471-8241-64475e9f5551)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/657d4fbc-86ce-4dfd-986e-c462acff296c)

#### Penjelasan Program :
<p align="justify">Kita menggunakan fungsi fibonacci untuk menghitung nilai Fibonacci dari suatu nilai. Fungsi fibonacci menggunakan rekursif dalam perhitungannya. Jika nilai n adalah 0, maka fungsi akan mengembalikan nilai 0. Jika nilai n adalah 1, maka fungsi akan mengembalikan nilai 1. Jika nilai n bukan 0 atau 1, fungsi akan mengembalikan hasil penjumlahan dari nilai rekursif fungsi fibonacci dengan parameter n-1 dan n-2. Dalam fungsi main, pengguna diminta untuk memasukkan nilai n, kemudian fungsi fibonacci digunakan untuk menghitung nilai Fibonacci ke-n tersebut.

## III. Kesimpulan

<p align="justify">Rekursif adalah konsep dalam pemrograman yang memungkinkan suatu fungsi memanggil dirinya sendiri untuk menghasilkan output. Rekursif sangat berguna untuk menghitung nilai faktorial, deret Fibonacci, dan lain-lain. Namun, rekursif juga memiliki beberapa kelemahan, seperti kurang efisien, tidak stabil, dan kurang scalable. Untuk menggunakan rekursif dengan baik, Anda harus memahami konsepnya dengan bijak dan hati-hati. Penting juga untuk memahami batasan rekursif guna menghindari error. Dengan pemahaman yang baik tentang rekursif, Anda dapat membuat program yang lebih efisien dan efektif. Oleh karena itu, rekursif adalah konsep yang sangat penting dalam pemrograman dan harus dipahami dengan baik.</p>

## IV. Referensi

#### [1] Muhammad Fadhilah & Muhammad Rizal. Analisis Rekursif dalam Bahasa C++ : Kajian Terhadap Fungsi Rekursif. Jurnal Teknologi Informasi dan Komputer (JTIK), Universitas Islam Indonesia, 2018.
#### [2] Indah Sari, Noviana Sari, & Dwi Agustina. Perbandingan Performa Algoritma Rekursif dan Iteratif untuk Menghitung Faktorial Bilangan Besar. Jurnal Teknik Informatika Universitas Sriwijay, 2023.
