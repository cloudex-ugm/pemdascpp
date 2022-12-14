// C++ program to implement bubble sort
// by using Non-type as function parameters
#include <iostream>
using namespace std;
  
// Function to swap two numbers
template <class T>
void swap_(T* x, T* y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}
  
// Function to implement the Bubble Sort
template <class T, int size>
void bubble_sort(T arr[])
{
    for (int i = 0; i < size - 1; i++) {
  
        // Last i elements are already
        // in place
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
  
                // Swap operation
                swap_(&arr[j], &arr[j + 1]);
            }
        }
    }
}
  
// Function to print an array
template <class T, int size>
void printArray(T arr[])
{
    int i;
    for (i = 0; i < size - 1; i++) {
        cout << arr[i] << ", ";
    }
  
    cout << arr[size - 1] << endl;
}
  
// Driver Code
int main()
{
    // Given array arr[]
    float arr[] = { 1.1, 1.2, 0.3, 4.55, 1.56, 0.6 };
    const int size_arr = sizeof(arr) / sizeof(arr[0]);
  
    // Size of the array passed as
    // an argument to the function
    bubble_sort<float, size_arr>(arr);
  
    cout << "Sorted Array is: ";
    printArray<float, size_arr>(arr);
  
    return 0;
}