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
