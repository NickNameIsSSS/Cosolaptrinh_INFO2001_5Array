//Linear Search
#include <stdio.h>

int LinearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100], n;
    int x;
    printf("Vui long nhap so n:");
    scanf("%d", &n);
    printf("Vui long nhap so phan tu:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Vui long nhap so can tim:");
    scanf("%d", &x);
    printf("\nX thuoc phan tu la:%d", LinearSearch(arr, n, x));
    return 0;
}