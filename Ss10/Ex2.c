/*Bai 2 : Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, 
hãy sử dụng thuật toán sắp xếp nổi bọt (bubble sort)
để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include <stdio.h>

int main() {
    int arr[] = {1,8,6,2};  
    int n = sizeof(arr) / sizeof(int);  
    int temp;

    printf("Array begin is \n: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int i = 0;
    while(i < n - 1) { 
        int swapped = 0;  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
        i++;
    }

    printf("Array after arrange\n: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}