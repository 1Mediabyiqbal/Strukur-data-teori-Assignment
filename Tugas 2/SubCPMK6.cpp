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
