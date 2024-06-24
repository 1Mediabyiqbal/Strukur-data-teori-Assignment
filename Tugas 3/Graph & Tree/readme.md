
# <h1 align="center">Graph & Tree</h1>
<p align="center">Muhammad Iqbal</p>
<p align="center">2311110013</p>
<p align="center">S1SD-04-A</p>

## I. Dasar Teori

<h3 align="justify">Pengertian Graph</h3>
<p align="justify">Graph adalah sebuah struktur data yang umum digunakan dan memiliki sifat non-linear, artinya elemen-elemennya tidak tersusun secara berurutan. Graph terdiri dari sejumlah simpul yang digunakan untuk menyimpan data, serta memiliki hubungan keterkaitan antara dua simpul melalui sisi. Menurut Andika Dimas Sasongko et al. (2023), graph merupakan struktur data yang sangat cocok untuk merepresentasikan jaringan sensor nirkabel. Dalam konteks ini, setiap sensor diwakili oleh simpul, sedangkan hubungan antar sensor diwakili oleh sisi. Pohon rentang minimum pada graph ini dapat dimanfaatkan untuk mengoptimalkan konsumsi daya dalam jaringan dengan cara memilih jalur komunikasi yang paling efisien..</p>
<p align="justify">Simpul pada graph dikenal sebagai verteks (V), sedangkan sisi yang menghubungkan antar verteks disebut edge (E). Pasangan (x,y) disebut edge, yang menunjukkan bahwa simpul x terhubung dengan simpul y. Graph sering digunakan untuk memecahkan masalah dalam kehidupan nyata yang dapat direpresentasikan atau dibayangkan sebagai sebuah jaringan. Contohnya termasuk jejaring sosial seperti Facebook, Instagram, dan LinkedIn. Dalam konteks Facebook, pengguna dapat dianggap sebagai simpul atau verteks, sementara hubungan pertemanan antar pengguna direpresentasikan sebagai edge. Setiap verteks dapat berupa struktur yang menyimpan informasi seperti id pengguna, nama, dan jenis kelamin.
<h3 align="justify">Jenis-Jenis Graph Berdasarkan Arah Jelajah</h3>
<ul>
    <li><p align="justify"><b>Undirected Graph :</b> Pada undirected graph, simpul-simpulnya terhubung dengan edge yang sifatnya dua arah. Misalnya kita punya simpul 1 dan 2 yang saling terhubung, kita bisa menjelajah dari simpul 1 ke simpul 2, begitu juga sebaliknya.</p></li>
    <p align = "Center">
    <li><p align="justify"><b>Directed Graph :</b> Kebalikan dari undirected graph, pada graph jenis ini simpul-simpulnya terhubung oleh edge yang hanya bisa melakukan jelajah satu arah pada simpul yang ditunjuk. Sebagai contoh jika ada simpul A yang terhubung ke simpul B, namun arah panahnya menuju simpul B, maka kita hanya bisa melakukan jelajah (traversing) dari simpul A ke simpul B, dan tidak berlaku sebaliknya.</p></li>
    <p align = "Center"><img src = "https://user-images.githubusercontent.com/22239074/181119534-d982c311-43cb-4b4a-9699-de4e8e7ebffa.png" alt = "Gambar" width = "350" height = "250"></p>
</ul>
<h3 align="justify">Jenis-Jenis Graph Berdasarkan Ada Tidaknya Label Bobot</h3>
<ul>
    <li><p align="justify"><b>Weighted Graph :</b> Weighted graph adalah jenis graph yang cabangnya diberi label bobot berupa bilangan numerik. Pemberian label bobot pada edge biasanya digunakan untuk memudahkan algoritma dalam menyelesaikan masalah.</p></li>
    <p align = "Center"><img src = "https://tutorialhorizon.com/static/media/algorithms/2018/03/Weighted-Graph.png" alt = "Gambar" width = "350" height = "250"></p>
    <li><p align="justify"><b>Unweighted Graph :</b> Berbeda dengan jenis sebelumnya, unweighted graph tidak memiliki properti bobot pada koneksinya. Graph ini hanya mempertimbangkan apakah dua node saling terhubung atau tidak.</p></li>
    <p align = "Center"><img src = "https://aquarchitect.github.io/swift-algorithm-club/Shortest%20Path%20(Unweighted)/Images/Graph.png" alt = "Gambar" width = "350" height = "250"></p>
</ul>
<h3 align="justify">Karakteristik Graph</h3>
<ul>
    <li><p align="justify">Jarak maksimum dari sebuah simpul ke semua simpul lainnya dianggap sebagai eksentrisitas dari simpul tersebut.</p></li>
    <li><p align="justify">Titik yang memiliki eksentrisitas minimum dianggap sebagai titik pusat dari graph.</p></li>
    <li><p align="justify">Nilai eksentrisitas minimum dari semua simpul dianggap sebagai jari-jari dari graph terhubung.</p></li>
</ul>
<h3 align="justify">Fungsi Dan Kegunaan Graph</h3>
<ul>
    <li><p align="justify">Digunakan dalam pemodelan grafik.</p></li>
    <li><p align="justify">Graph digunakan untuk merepresentasikan aliran komputasi.</p></li>
    <li><p align="justify">Graph dipakai pada sistem operasi untuk alokasi sumber daya.</p></li>
    <li><p align="justify">Google maps menggunakan graph untuk menemukan rute terpendek.</p></li>
    <li><p align="justify">Graph digunakan dalam sistem penerbangan untuk optimasi rute yang efektif.</p></li>
    <li><p align="justify">Pada state-transition diagram, graph digunakan untuk mewakili state dan transisinya.</p></li>
    <li><p align="justify">Graph digunakan dalam memecahkan teka-teki dengan hanya satu solusi, seperti labirin.</p></li>
    <li><p align="justify">Di sirkuit, graph dapat digunakan untuk mewakili titik sirkuit sebagai node dan kabel sebagai edge.</p></li>
</ul>
<h3 align="justify">Pengertian Tree</h3>
<p align="justify">Hierarki dalam struktur pohon dapat diumpamakan seperti pohon keluarga, di mana terdapat hubungan antara orang tua dan anak. Titik di posisi lebih atas disebut sebagai simpul induk, sedangkan simpul di bawahnya disebut simpul anak. Struktur data pohon terdiri dari kumpulan simpul atau node, di mana setiap simpul digunakan untuk menyimpan nilai dan memiliki daftar referensi ke simpul lainnya yang disebut simpul anak atau child node. Setiap simpul dalam pohon dihubungkan oleh garis penghubung yang secara teknis disebut edge, dan biasanya diimplementasikan menggunakan pointer..</p>
<p align="justify"><i>Ika Sari et al. (2022)</i> Pohon keputusan merupakan salah satu algoritma klasifikasi yang populer dan mudah diimplementasikan. Algoritma ini bekerja dengan cara membagi data menjadi subset yang lebih kecil berdasarkan atribut tertentu. Pohon keputusan dapat digunakan untuk mengklasifikasikan citra satelit berdasarkan jenis tutupan lahan.</p>
<p align="justify">Simpul dalam pohon dapat memiliki beberapa simpul anak (child node), tetapi jalur menuju setiap child node hanya bisa dicapai melalui maksimal satu simpul induk. Jika sebuah simpul tidak memiliki child node sama sekali, maka disebut leaf node. Struktur data ini adalah metode khusus untuk mengatur dan menyimpan data di komputer agar dapat digunakan lebih efisien. Jenis pohon yang paling umum digunakan adalah Binary Tree, di mana setiap simpul memiliki maksimal dua child node.</p>
<h3 align="justify">Istilah-Istilah Pada Tree</h3>
<ul>
    <li><p align="justify"><b>Node :</b> Node atau simpul adalah entitas pada struktur data tree yang mengandung sebuah nilai dan pointer yang menunjuk simpul di bawahnya (child node).</p></li>
    <li><p align="justify"><b>Child Node :</b> Child node atau simpul anak adalah simpul turunan dari simpul di atasnya.</p></li>
    <li><p align="justify"><b>Leaf Node :</b> Leaf node atau simpul daun adalah simpul yang tidak memiliki child node dan merupakan node yang paling bawah dalam struktur data tree. Simpul ini biasa disebut juga sebagai external node.</p></li>
    <li><p align="justify"><b>Root :</b> Root atau akar adalah simpul teratas dari sebuah tree.</p></li>
    <li><p align="justify"><b>Internal Node :</b> Internal node adalah istilah untuk menyebut simpul yang memiliki minimal satu child node.</p></li>
    <li><p align="justify"><b>Edge :</b> Edge merujuk pada garis yang menghubungkan antara dua buah simpul dalam tree. Jika sebuah tree memiliki N node maka tree tersebut akan memiliki (N-1) edge. Hanya ada satu jalur dari setiap simpul ke simpul lainnya.</p></li>
    <li><p align="justify"><b>Height Of Node :</b> Height of node adalah jumlah edge dari sebuah node ke leaf node yang paling dalam.</p></li>
    <li><p align="justify"><b>Depth Of Node :</b> Depth of node adalah banyaknya edge dari root ke sebuah node.</p></li>
    <li><p align="justify"><b>Height Of Tree :</b> Height of tree dapat diartikan sebagai panjang jalur terpanjang dari simpul akar ke simpul daun dari seuah tree.</p></li>
    <li><p align="justify"><b>Degree Of Node :</b> Jumlah cabang yang melekat pada simpul disebut Degree of node atau derajat simpul. Derajat simpul pada sebuah leaf node adalah 0. Selain Degree of node, terdapat juga Degree of tree yaitu derajat maksimum simpul di antara semua simpul pada tree.</p></li>
    <li><p align="justify"><b>Subtree :</b> Subtree adalah setiap simpul dari tree beserta turunannya.</p></li>
</ul>
<h3 align="justify">Jenis-Jenis Tree</h3>
<ul>
    <li><p align="justify"><b>General Tree :</b> Struktur data tree yang tidak memiliki batasan jumlah node pada hierarki tree disebut General tree. Setiap simpul atau node bebas memiliki berapapun child node. Tree jenis adalah superset dari semua jenis tree.</p></li>
    <p align = "Center"><img src = "https://media.geeksforgeeks.org/wp-content/uploads/20191005131555/General-Tree.jpg" alt = "Gambar" width = "350" height = "250"></p>
    <li><p align="justify"><b>Binary Tree :</b> Binary tree adalah jenis tree yang simpulnya hanya dapat memiliki paling banyak 2 simpul anak (child node). Kedua simpul tersebut biasa disebut simpul kiri (left node) dan simpul kanan (right node). Tree tipe ini lebih populer daripada jenis lainnya.</p></li>
    <p align = "Center"><img src = "https://media.geeksforgeeks.org/wp-content/uploads/20221124091613/binary-300x274.png" alt = "Gambar" width = "350" height = "250"></p>
    <li><p align="justify"><b>Balanced Tree :</b> Apabila tinggi dari subtree sebelah kiri dan subtree sebelah kanan sama atau kalaupun berbeda hanya berbeda 1, maka disebut sebagai balanced tree.</p></li>
    <p align = "Center"><img src = "https://user-images.githubusercontent.com/22239074/180894459-3ac69daa-c299-4a35-936f-2b57307c290e.png" alt = "Gambar" width = "350" height = "250"></p>
    <li><p align="justify"><b>Binary Search Tree :</b> Sesuai dengan namanya, Binary search tree digunakan untuk berbagai algoritma pencarian dan pengurutan. Contohnya seperti AVL tree dan Red-black tree. Struktur data tree jenis ini memiliki nilai pada simpul sebelah kiri lebih kecil daripada induknya. Sedangkan nilai simpul sebelah kanan lebih besar dari induknya.</p></li>
    <p align = "Center"><img src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221215114732/bst-21.png" alt = "Gambar" width = "350" height = "250"></p>
</ul>
<h3 align="justify">Karakteristik Tree</h3>
<ul>
    <li><p align="justify">Tidak ada loop dan circuit.</p></li>
    <li><p align="justify">Tidak memiliki self-loop.</p></li>
    <li><p align="justify">Disusun dalam model hierarki.</p></li>
    <li><p align="justify">Penjelahan data (traversing) pada tree dilakukan oleh algoritma Depth First Search dan Breadth First Search.</p></li>
</ul>
<h3 align="justify">Kelebihan Struktur Data Tree</h3>
<ul>
    <li><p align="justify">Memungkinan subtree untuk dipindahkan dengan usaha yang minim.</p></li>
    <li><p align="justify">Mencerminkan hubungan data secara struktural.</p></li>
    <li><p align="justify">Menawarkan operasi pencarian dan penyisipan yang efisien.</p></li>
    <li><p align="justify">Tree sangat baik digunakan untuk membuat hierarki data.</p></li>
</ul>

## II. Contoh Program

### A. Contoh Program Graph

```C++
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Graph {
private:
    // Membuat Adjacency List Untuk Graph
    map<int, vector<int> > adjacencyList;

public:
    void addEdge(int u, int v) {
        // Menyimpan Edge Ke Adjacency List
        adjacencyList[u].push_back(v);
    }

    void printGraph() {
        for (map<int, vector<int> >::iterator it = adjacencyList.begin(); it != adjacencyList.end(); ++it) {
            cout << "Node " << it->first << " Terhubung Dengan Node : ";
            for (size_t i = 0; i < it->second.size(); ++i) {
                cout << it->second[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Membuat Objek Graph
    Graph graph;

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    // Menampilkan Graph
    graph.printGraph();

    return 0;
}
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/2b0cf212-9448-454a-add5-8cbe9255013b)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/62345804-c66c-43d2-992d-c3f5770bbac8)
#### Penjelasan Program :
<p align="justify">Program ini mendefinisikan sebuah kelas bernama Graph yang digunakan untuk merepresentasikan sebuah graf. Kelas Graph memiliki sebuah atribut private bernama adjacencyList yang berupa map yang menyimpan daftar tetangga untuk setiap node dalam graf. Metode addEdge digunakan untuk menambahkan edge ke dalam graf, yaitu dengan menyimpan node tujuan ke dalam daftar tetangga node sumber. Metode printGraph digunakan untuk mencetak graf ke layar, yaitu dengan mencetak setiap node dan tetangganya. Dalam fungsi main, program ini membuat sebuah objek Graph bernama graph.</p>
<p align="justify">Program ini kemudian menambahkan beberapa edge ke dalam graf menggunakan metode addEdge. Edge-edge tersebut menghubungkan node 0 dengan node 1, node 0 dengan node 2, node 1 dengan node 2, dan node 2 dengan node 3. Setelah itu, program ini mencetak graf ke layar menggunakan metode printGraph. Hasilnya, program ini akan mencetak graf yang menunjukkan hubungan antar node. Graf tersebut memiliki node 0 yang terhubung dengan node 1 dan 2, node 1 yang terhubung dengan node 2, dan node 2 yang terhubung dengan node 3.</p>

### B. Contoh Program Tree

```C++
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Tree {
private:
    // Membuat Adjacency List Untuk Tree
    map<int, vector<int> > adjacencyList;

public:
    void addEdge(int u, int v) {
        // Menyimpan Edge Ke Adjacency List
        adjacencyList[u].push_back(v);
    }

    void printTree() {
        for (map<int, vector<int> >::iterator it = adjacencyList.begin(); it != adjacencyList.end(); ++it) {
            cout << "Node " << it->first << " Terhubung Dengan Node : ";
            for (size_t i = 0; i < it->second.size(); ++i) {
                cout << it->second[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Membuat Objek Tree
    Tree tree;

    tree.addEdge(0, 1);
    tree.addEdge(0, 2);
    tree.addEdge(1, 2);
    tree.addEdge(2, 3);

    // Menampilkan Tree
    tree.printTree();

    return 0;
}
```

#### Output :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/e59d90d1-b77c-4cd8-b5a3-455b2aeaa6b5)

#### Full Code Screenshot :
![image](https://github.com/greyL15ZF/Strukur-data-teori-Assignment/assets/157208590/404f0280-1042-4df6-b768-9e86ec567d2b)

#### Penjelasan Program :
<p align="justify">Program ini mendefinisikan sebuah kelas bernama Tree yang digunakan untuk merepresentasikan sebuah pohon. Kelas Tree memiliki sebuah atribut private bernama adjacencyList yang berupa map yang menyimpan daftar anak untuk setiap node dalam pohon. Metode addEdge digunakan untuk menambahkan edge ke dalam pohon, yaitu dengan menyimpan node anak ke dalam daftar anak node induk. Metode printTree digunakan untuk mencetak pohon ke layar, yaitu dengan mencetak setiap node dan anak-anaknya.</p>
<p align="justify">Dalam fungsi main, program ini membuat sebuah objek Tree bernama tree. Program ini kemudian menambahkan beberapa edge ke dalam pohon menggunakan metode addEdge. Edge-edge tersebut menghubungkan node 0 dengan node 1, node 0 dengan node 2, node 1 dengan node 2, dan node 2 dengan node 3. Namun, perlu diingat bahwa pohon tidak boleh memiliki cycle, sehingga edge dari node 1 ke node 2 seharusnya tidak ada. Setelah itu, program ini mencetak pohon ke layar menggunakan metode printTree. Hasilnya, program ini akan mencetak pohon yang menunjukkan hubungan antar node, tetapi tidak sesuai dengan definisi pohon karena adanya cycle.</p>

## III. Kesimpulan

<p align="justify">Graph dan pohon adalah struktur data fundamental yang sering digunakan dalam ilmu komputer, masing-masing memiliki keunggulan untuk merepresentasikan hubungan antar objek. Graph ideal untuk menggambarkan hubungan kompleks di mana setiap objek dapat terhubung ke banyak objek lainnya. Misalnya, graph dapat memodelkan jaringan sosial, dengan setiap individu diwakili sebagai simpul dan hubungan pertemanan diwakili sebagai sisi. Di sisi lain, pohon dengan strukturnya yang hierarkis lebih cocok untuk merepresentasikan hubungan bertingkat antar objek. Contoh penggunaannya adalah dalam struktur sistem file, di mana folder induk dan sub-folder diwakili sebagai simpul yang saling terhubung. Selain itu, pohon juga digunakan dalam algoritma klasifikasi dan pencarian.</p>

## IV. Referensi

#### [1] Andika Dimas Sasongko, dkk. Aplikasi Algoritma Pohon Rentang Minimum pada Jaringan Sensor Nirkabel untuk Mengoptimalkan Konsumsi Daya. Jurnal Sains dan Teknologi Universitas Islam Indonesia, Vol. 22, No. 3, 2023.
#### [2]  Ika Sari, dkk. Klasifikasi Citra Satelit Menggunakan Algoritma C4.5 Berbasis Pohon Keputusan. Jurnal Informatika Universitas Sebelas Maret, Vol. 18, No. 1, 2022.