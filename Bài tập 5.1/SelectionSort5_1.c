// Selection sort

#include <stdio.h>
void SelectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Cac phan tu sau khi duoc sap xep la:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, arr[100];
    printf("Nhap n:");
    scanf("%d", &n);
    printf("Nhap so phan tu trong mang:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    SelectionSort(n, arr);
    return 0;
}
