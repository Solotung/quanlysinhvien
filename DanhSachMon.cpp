#include "DanhSachMon.h"

void NhapDanhSachMon(DANHSACHMONHOC &ds)
{
    do
    {
        printf("\nNhap vao so luong mon hoc: ");
        scanf("%d", &ds.n);
        if (ds.n < 0)
        {
            printf("\nSo luong mon hoc phai duong. Moi nhap lai");
        }
    } while (ds.n < 0);

    ds.arr = (MONHOC*)malloc(ds.n * sizeof(MONHOC));

    for (int i = 0; i < ds.n; i++)
    {
        printf("\n---------Nhap vao mon hoc thu %d--------\n", i + 1);
        NhapMonHoc(ds.arr[i]);
    }
}

void XuatDanhSachMon(DANHSACHMONHOC ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        printf("\n---------Mon hoc thu %d--------\n", i + 1);
        XuatMonHoc(ds.arr[i]);
    }
}
