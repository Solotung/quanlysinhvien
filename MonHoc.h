#pragma once
#include <stdio.h>
#include <conio.h>
struct MonHoc
{
    char TenMon[30];
    float SoDiem;
    int SoChi;
};
typedef struct MonHoc MONHOC;

void NhapMonHoc(MONHOC &);
void XuatMonHoc(MONHOC);
