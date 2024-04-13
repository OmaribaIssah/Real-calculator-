//Brian Omariba ENE212-0162/2021
#include <stdio.h>

void sortArray(int arr[], int n) {
    int i, j, assign;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                assign = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = assign;
            }
        }
    }
}

int main() {
    int marks[10] = {90, 58, 72, 80, 90, 86, 89, 67, 98};
  for (int i=0;i<9;i++){
  printf("%d ",marks[i]);
  }   
    int t = 5; // Index for insertion
    int value_to_insert = 88;

    // Shift elements to make space for new value
    for (int i = 9; i > t; i--) {
        marks[i] = marks[i - 1];
    }
    // Insert new value at index t
    marks[t] = value_to_insert;

    // Sort the array after insertion
    sortArray(marks, 10);

    // Print the array after insertion
    printf("\nArray after insertion:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", marks[i]);
    }

    int x = 5; // Index for deletion

    // Shift elements to remove the value at index x
    for (int i = x; i < 9; i++) {
        marks[i] = marks[i + 1];
    }

    // Optionally clear the last element since it's a duplicate now
    marks[9] = 0;

    // Sort the array after deletion
    sortArray(marks, 10);

    // Print the array after deletion
    printf("\nArray after deletion:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
    
    }
