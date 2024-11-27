#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int val){
    data=val;
    next=nullptr;
    }
};

int main() {

    Node* head = new Node(10);
    cout << "Node data: " << head->data << endl;

    delete head;
    return 0;
}

