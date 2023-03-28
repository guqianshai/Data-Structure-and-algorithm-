#include <stdio.h>

void insertSort(int arr[], int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > key)) {    // 找到前面的元素，<当前值 
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void main() {
    printf("\n-----insertSort-----begin\n");
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int) sizeof(arr) / sizeof(*arr);
    insertSort(arr, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n-----insertSort-----begin\n");
}
//认为第一个元素是有序的，从第二个元素开始依次以前面的元素进行比较
