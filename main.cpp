#include "SinhVien.h"

int main()
{
    // MONHOC mh;
    // NhapMonHoc(mh);
    // XuatMonHoc(mh);

    // DANHSACHMONHOC ds;
    // NhapDanhSachMon(ds);
    // XuatDanhSachMon(ds);

    // free(ds.arr);

    SINHVIEN sv;
    NhapSinhVien(sv);
    XuatSinhVien(sv);

    float Dtb = TinhDiemTrungBinh(sv);
    printf("\nDiem trung binh: %f", Dtb);
  
    printf("\nXep Loai: %s", XepLoai(sv));
    
    free(sv.danhsachmon.arr);
    getch();
    return 0;
}