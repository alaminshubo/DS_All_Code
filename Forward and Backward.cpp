#include<iostream>
using namespace std;

void printForward(int arr[], int size) {
    cout << "Array in forward order: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printBackward(int arr[], int size) {
    cout << "Array in backward order: ";
    for(int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int quiz[5] = {5, 15, 20, 10, 7};
    int size = 5;
    printForward(quiz, size);
    printBackward(quiz, size);

    return 0;
}

