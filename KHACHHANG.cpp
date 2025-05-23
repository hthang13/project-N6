// KhachHang.cpp
#include "KhachHang.h"

KhachHang::KhachHang(string ma, string ten, string dc, string sdt) 
    : maKH(ma), tenKH(ten), diaChi(dc), soDienThoai(sdt) {}

KhachHang::~KhachHang() {}

void KhachHang::xuatThongTin() const {
    cout << "Ma KH: " << maKH << ", Ten KH: " << tenKH << ", Dia chi: " << diaChi << ", SDT: " << soDienThoai << endl;
}

double KhachHang::tinhChietKhau() const {
    return 0;
}

bool KhachHang::operator==(const KhachHang& kh) const {
    return this->tenKH == kh.tenKH;
}

string KhachHang::getTenKH() const {
    return tenKH;
}

KhachHangVIP::KhachHangVIP(string ma, string ten, string dc, string sdt, int muc, double diem)
    : KhachHang(ma, ten, dc, sdt), mucVIP(muc), diemTichLuy(diem) {}

KhachHangVIP::~KhachHangVIP() {}

void KhachHangVIP::xuatThongTin() const {
    KhachHang::xuatThongTin();
    cout << "Muc VIP: " << mucVIP << ", Diem tich luy: " << diemTichLuy << endl;
}

double KhachHangVIP::tinhChietKhau() const {
    return mucVIP * 0.05 + diemTichLuy * 0.001;
}

double KhachHangVIP::getDiemTichLuy() const {
    return diemTichLuy;
}

