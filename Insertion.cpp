#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#define MAX 100000
using namespace std;

void InsertionSort(int arr[], int size)
{
    int key, check;
    for(int i = 1; i < size; i++)
    {
        key = arr[i];
        check = i - 1;
        while(check >= 0 && arr[check] > key)
        {
            arr[check + 1] = arr[check];
            check = check - 1;
        }
        arr[check + 1] = key;
    }
}

int main() {
    int num[MAX];
    srand(time(0));

    ofstream file("unsorted_array.txt");
    if (file.is_open()) {
        for(int i = 0; i < MAX; i++) {
            num[i] = rand();
            file << num[i] << " ";
        }
        file.close();
        cout << "Generated 1 lakh unsorted numbers and saved to unsorted_array.txt" << endl;
    } else {
        cerr << "Error opening file to write unsorted array." << endl;
        return 1;
    }

    cout << "Sample of Unsorted Array: ";
    for(int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    clock_t start = clock();
    InsertionSort(num, MAX);
    clock_t endf = clock();
    double runtime = (double)(endf - start) / CLOCKS_PER_SEC;
    cout << "Runtime for insertion sort: " << runtime << " seconds" << endl;

    ofstream sorted_file("sorted_array.txt");
    if (sorted_file.is_open()) {
        for(int i = 0; i < MAX; i++) {
            sorted_file << num[i] << " ";
        }
        sorted_file.close();
        cout << "Sorted array saved to sorted_array.txt" << endl;
    } else {
        cerr << "Error opening file to write sorted array." << endl;
        return 1;
    }

    cout << "Sample of Sorted Array: ";
    for(int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
