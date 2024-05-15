#include <iostream>
#include <algorithm>

template <typename T>
void sortArray(T arr[], int size) {
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        std::swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main() {
  int arrInt[] = {32, 45, 67, 2, 7};
  int n = sizeof(arrInt)/sizeof(arrInt[0]);
  sortArray(arrInt, n);
  std::cout << "Sorted array of integers: \n";
  for (int i = 0; i < n; i++) {
    std::cout << arrInt[i] << " ";
  }
  
  float arrFloat[] = {1.2, 3.45, 9.1, 4.6};
  n = sizeof(arrFloat)/sizeof(arrFloat[0]);
  sortArray(arrFloat, n);
  std::cout << "\n\nSorted array of floats: \n";
  for (int i = 0; i < n; i++) {
    std::cout << arrFloat[i] << " ";
  }
  return 0;
}


