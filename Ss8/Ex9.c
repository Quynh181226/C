/*Bai 9 : Khai báo và gán giá trị cho mảng bất kỳ,
 tiến hành in ra phần tử có số lần xuất hiện nhiều
 nhất trong mảng đã khai báo.*/
#include <stdio.h>
int main()
{
    int a[] = {1, 8, 1, 2, 2, 0, 0, 6, 2, 2, 2, 2};
    int count = 0;
    int index;
    int max;
    printf("The elements sub-diagonal are :");
    for (int i = 0; i < n; i++)
    {
        index = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                index += 1
            }
            if (index < count)
            {
                count = index;
                max = a[i];
            }
        }
    }
    printf("Element with the most occurrences is :%d", max);
    return 0;
}
