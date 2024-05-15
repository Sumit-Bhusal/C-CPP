#include <iostream>

template<typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arrInt[] = {64, 34, 25, 12, 22, 11, 90};
    int nInt = sizeof(arrInt) / sizeof(arrInt[0]);
    bubbleSort(arrInt, nInt);
    std::cout << "Sorted array of integers: \n";
    for (int i = 0; i < nInt; i++)
        std::cout << arrInt[i] << " ";
        
    float arrFloat[] = {64.9, 34.3, 25.2, 12.1, 22.9, 11.8, 90.7};
    int nFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);
    bubbleSort(arrFloat, nFloat);
    std::cout << "\n\nSorted array of floats: \n";
    for (int i = 0; i < nFloat; i++)
        std::cout << arrFloat[i] << " ";
    return 0;
}
