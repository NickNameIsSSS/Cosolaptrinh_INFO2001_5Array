//Binary Search
#include <stdio.h>

int BinarySearch(int arr[], int n, int x)
{
    int left, right, mid;
    left = 0, right = n - 1;
    do
    {
        mid = (right + left)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    } while (left <= right);
    return -1;
}

int main()
{
    int arr[100], n, x;
    printf("Vui long nhap so n:");
    scanf("%d", &n);
    printf("Vui long nhap so phan tu:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can tim x:");
    scanf("%d", &x);
    printf("Phan tu x can tim trong mang co chi so la:%d", BinarySearch(arr, n, x));
    return 0;
}
