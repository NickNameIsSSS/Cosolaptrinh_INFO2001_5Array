// Bubble sort
#include <stdio.h>
void bubblesort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sap xep tu be den lon la:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[100], n;
    printf("Vui long nhap n phan tu:");
    scanf("%d", &n);
    printf("Nhap cac phan tu:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(n, arr);
    return 0;
}
