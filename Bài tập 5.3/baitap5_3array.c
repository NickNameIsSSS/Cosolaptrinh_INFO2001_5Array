// Nhập điểm của học sinh và tính điểm trung bình của cả lớp. Và in ra màn hình

#include <stdio.h>
float TinhDiemTB(float HocSinhLop[], float DiemTB, int n)
{
    float sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += HocSinhLop[i];
    }
    DiemTB = sum / n;
    return DiemTB;
}

int main()
{
    int n;
    float HocSinhLop[100];
    float DiemTB;
    do
    {
        printf("Vui Long nhap so hoc sinh co trong lop hoc:");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Vui long nhap lai so hoc sinh vi %d <= 0", n);
        }
    } while (n <= 0);
    printf("Vui long nhap diem cua %d hoc sinh:", n);

    for (int i = 0; i < n; i++)
    {
        do
        {
            scanf("%f", &HocSinhLop[i]);
            if (HocSinhLop[i] > 10 || HocSinhLop[i] < 0)
            {
                printf("Vui long nhap lai diem cua hoc sinh thu %d!:", i + 1);
            }
        } while (HocSinhLop[i] > 10 || HocSinhLop[i] < 0);
    }
    printf("Diem trung binh cua hoc sinh ca lop la:%0.2f", TinhDiemTB(HocSinhLop, DiemTB, n));
    return 0;
}