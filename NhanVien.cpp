// NhanVien.cpp
#include "NhanVien.h"

NhanVien::NhanVien(string ma, string ten, double luong, string cv)
    : maNV(ma), tenNV(ten), luongCoBan(luong), chucVu(cv) {}

NhanVien::~NhanVien() {}

void NhanVien::xuatThongTin() const {
    cout << "Ma NV: " << maNV << ", Ten NV: " << tenNV << ", Luong CB: " << luongCoBan << ", Chuc vu: " << chucVu << endl;
}

double NhanVien::tinhLuong(int gioLamViec) const {
    return luongCoBan * gioLamViec;
}

bool NhanVien::operator<(const NhanVien& nv) const {
    return this->luongCoBan < nv.luongCoBan;
}

string NhanVien::getChucVu() const {
    return chucVu;
}

NhanVienBanHang::NhanVienBanHang(string ma, string ten, double luong, string cv, double ds, int soDH)
    : NhanVien(ma, ten, luong, cv), doanhSo(ds), soDonHang(soDH) {}

NhanVienBanHang::~NhanVienBanHang() {}

void NhanVienBanHang::xuatThongTin() const {
    NhanVien::xuatThongTin();
    cout << "Doanh so: " << doanhSo << ", So don hang: " << soDonHang << endl;
}

double NhanVienBanHang::tinhLuong(int gioLamViec) const {
    return NhanVien::tinhLuong(gioLamViec) + doanhSo * 0.1;
}

int NhanVienBanHang::getSoDonHang() const {
    return soDonHang;
}
