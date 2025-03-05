/*Bai 10 : Cải tiến bài toán trước đó sao cho nếu có nhiều
 phần tử có cùng số lần xuất hiện lớn nhất thì in ra tất cả
  các phần tử đó*/
#include <stdio.h>
int main()
{
    int a[] = {1, 8, 1, 2, 2, 0, 0, 6};
    int n = sizeof(a) / sizeof(int);
    int count = 0, h = 0;
    int index;
    int max[100];
    int max_max[100] = {0};

    for (int i = 0; i < n; i++)
    {
        index = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                index += 1;
            }
        }
        if (index > count)
        {
            count = index;
        }
    }
    for (int i = 0; i < n; i++)
    {
        index = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                index += 1;
            }
        }
        if (index == count && max_max[a[i]] == 0)
        {
            max_max[a[i]] = 1;
            max[h++] = a[i];
        }
    }
    printf("Element with the most occurrences is :");
    for (int i = 0; i < h; i++)
    {
        printf("%d ", max[i]);
    }
    return 0;
}
