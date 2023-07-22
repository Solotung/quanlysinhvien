#pragma once
#include "MonHoc.h"
#include <stdlib.h>

struct DanhSachMonHoc
{
    int n;
    MONHOC *arr;
};
typedef DanhSachMonHoc DANHSACHMONHOC;

void NhapDanhSachMon(DANHSACHMONHOC&);
void XuatDanhSachMon(DANHSACHMONHOC);