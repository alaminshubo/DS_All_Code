#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

int main() {
    Node* head = new Node(20);
    cout << "Node data: " << head->data << endl;

    delete head;
    return 0;
}
