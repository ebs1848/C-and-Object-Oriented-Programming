//000000000 emir behiç sağlam
#include <cstdio>

int* apply_all(const int* const arr1, const size_t size1, const int* const arr2, const size_t size2);
void print(const int* const arr, const size_t size);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {10, 20, 30};

    printf("Array 1: ");
    print(array1, 5);S
    printf("Array 2: ");
    print(array2, 3);

    int* results = apply_all(array1, 5, array2, 3);

    printf("Result: ");
    print(results, 15); 

    delete[] results;

    return 0;
}

int* apply_all(const int* const arr1, const size_t size1, const int* const arr2, const size_t size2) {
    size_t newSize = size1 * size2;
    int* result = new int[newSize]; 

    size_t index = 0;
    for (size_t i = 0; i < size2; ++i) {
        for (size_t j = 0; j < size1; ++j) {
            result[index++] = arr1[j] * arr2[i]; 
        }
    }

    return result;
}

void print(const int* const arr, const size_t size) {
    printf("[ ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

