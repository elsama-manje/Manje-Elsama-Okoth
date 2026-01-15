

1. Array Reverse Display
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
________________________________________
2. Array Sum Calculation
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is : %d", sum);

    return 0;
}
________________________________________
3. Print Unique Elements
#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
________________________________________
4. Find Maximum and Minimum
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d", min);

    return 0;
}
________________________________________
5. Sort Array Ascending
#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
________________________________________
6. Insert in Unsorted Array
#include <stdio.h>

int main() {
    int n, i, pos, value;
    int arr[100];

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("After Insert the element the new list is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
________________________________________
7. Circular Data Logger
#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0, count = 0;

void insert(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE)
        count++;
}

void printBuffer() {
    int i;
    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples (oldest → newest): ");
    for (i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int value, choice;

    while (1) {
        printf("\n1. Insert Data\n2. Print Buffer\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &value);
            insert(value);
        } else if (choice == 2) {
            printBuffer();
        } else {
            break;
        }
    }

    return 0;
}
________________________________________
8. 2D Array Traversal (6 × 4)                                                                                                                                       #include <stdio.h>

int main() {
    int arr[6][4];
    int i, j;

    printf("Enter elements for 6x4 array:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nTraversing the 2D array:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


