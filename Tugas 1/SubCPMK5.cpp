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
