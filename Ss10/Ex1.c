/*Bai 1 : Khởi tạo và gán giá trị cho mảng bất kỳ, 
yêu cầu người dùng nhập vào phần tử bất kỳ và kiểm 
tra xem phần tử có tồn tại trong mảng không,
 in ra vị trí của phần tử đó.*/
#include <stdio.h>

int main() {
    int arr[] = {1,8,6,2};  
    int n, m = 0 ;  
   printf("Input element to search : ");
   scanf("%d",&n);
   for(int i = 0; i < sizeof(arr)/sizeof(int);i++){
    if(arr[i] == n){
        printf("Element %d found at position : %d \n", i + 1);
        m = 1;
        break;
    }
   }
   if(!m){
    printf("Element %d not found in array.\n",n);   
   }
     
    return 0;
}