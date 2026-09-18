#include <iostream>
using namespace std;

// Function that prints the memory location and value pointed to by ptr
void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Part 2a: Stack-allocated int
    int iValue = 42;
    cout << "--- Stack variable ---" << endl;
    analyze_pointer(&iValue);   // pass address with &

    // Part 2b: Heap-allocated int
    int *heapValue = new int(99);
    cout << "--- Heap variable ---" << endl;
    analyze_pointer(heapValue); // pass pointer directly

    // Free heap memory
    delete heapValue;

    return 0;
}