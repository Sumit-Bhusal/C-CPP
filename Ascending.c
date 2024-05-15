#include<stdio.h> 

void swap(int *var1, int *var2) 
{ 
   int temp = *var1; 
   *var1 = *var2; 
   *var2 = temp; 
}

// Here we are implementing bubbleSort
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++){

        // Since, after each iteration righmost i elements are sorted 
        for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
    }
}

/* Function to print array */
void display(int arr[], int size) 
{ 
   int i; 
   for (i=0; i < size; i++) 
      printf("%d ", arr[i]); 
   printf("\n"); 
}

// Main function to run the program
int main() 
{ 
    int array[] = {50, 30, 10, 90, 80, 20, 40, 70}; 
    int size = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, size);

    display(array, size); 
    return 0; 
}
