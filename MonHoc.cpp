#include "MonHoc.h"

void NhapMonHoc(MONHOC &mh)
{
    fflush(stdin);
    printf("\nNhap vao ten mon hoc: ");
    fgets(mh.TenMon, sizeof(mh.TenMon), stdin);

    do
    {
        printf("\nNhap vao so diem mon hoc: ");
        scanf("%f", &mh.SoDiem);

        if (mh.SoDiem < 0 || mh.SoDiem > 10)
        {
            printf("\nSo diem phai nam trong doan tu 0 -> 10. Xin Kiem tra lai");
        }
    } while (mh.SoDiem < 0 || mh.SoDiem > 10);

    do
    {
        printf("\nNhap vao so chi: ");
        scanf("%d", &mh.SoChi);

        if (mh.SoChi < 0)
        {
            printf("\nSo chi phai lon hon hoac bang khong. Xin Kiem tra lai");
        }
    } while (mh.SoChi < 0);
}

void XuatMonHoc(MONHOC mh)
{
    printf("\nTen mon hoc: %s", mh.TenMon);
    printf("\nDiem thi: %.2f", mh.SoDiem);
    printf("\nSo chi: %d", mh.SoChi);
}