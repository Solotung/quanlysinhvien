#include "SinhVien.h"

void NhapSinhVien(SINHVIEN &sv)
{
    fflush(stdin);
    printf("\nNhap vao ma so: ");
    fgets(sv.MaSo, sizeof(sv.MaSo), stdin);

    fflush(stdin);
    printf("\nNhap vao ho ten: ");
    fgets(sv.Ten, sizeof(sv.Ten), stdin);

    printf("\nNhap vao danh sach mon hoc: ");
    NhapDanhSachMon(sv.danhsachmon);
}

void XuatSinhVien(SINHVIEN sv)
{
    printf("\nMa so: %s", sv.MaSo);
    printf("\nHo Ten: %s", sv.Ten);
    printf("\nDanh sach cac mon hoc: ");
    XuatDanhSachMon(sv.danhsachmon);
}

float TinhDiemTrungBinh(SINHVIEN sv)
{
    float TongDiem = 0;
    int TongChi = 0;
    for (int i = 0; i < sv.danhsachmon.n; i++)
    {
        TongDiem += sv.danhsachmon.arr[i].SoDiem * sv.danhsachmon.arr[i].SoChi;
        TongChi += sv.danhsachmon.arr[i].SoChi;
    }
    return TongDiem / TongChi;
}

char *XepLoai(SINHVIEN sv)
{
   float Dtb = TinhDiemTrungBinh(sv);
   if (Dtb < 2)
   {
       return "Kem";
   }
   if (Dtb < 5)
   {
       return "Yeu";
   }
   if (Dtb < 7)
   {
       return "Trung Binh";
   }
   if (Dtb < 8)
   {
       return "Kha";
   }
   if (Dtb < 9)
   {
       return "Gioi";
   }
   return "XuatSac";
}