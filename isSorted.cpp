#include <iostream>
#include <cassert>
using namespace std;

// Forward declaration
bool isSorted(const int* arr, const int size);

// ============ TEST FUNCTIONS ============
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}


// Compares each element with the next.
// Returns false as soon as an out-of-order pair is found.
bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
// ============ MY ADDITIONAL TESTS ============
void testAllEqual() {
    int arr[] = {4, 4, 4, 4};
    assert(isSorted(arr, 4) == true);
}

void testTwoElementsSorted() {
    int arr[] = {10, 20};
    assert(isSorted(arr, 2) == true);
}

// ============ MAIN ============
int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
     testAllEqual();
    testTwoElementsSorted();

    cout << "All tests passed!" << endl;
    return 0;
}