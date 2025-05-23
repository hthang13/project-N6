#include <iostream>
#include "SanPham.h"
using namespace std;

SanPham::SanPham(string ma, string ten, double g) : maSP(ma), tenSP(ten), gia(g) {};
SanPham::~SanPham() {};

void SanPham::xuatThongTin() const {
    cout << "Ma SP: " << maSP << ", Ten SP: " << tenSP << ", Gia: " << gia << endl;
}
double SanPham::getGia() const {
    return gia;
}
string SanPham::getMaSP() const {
    return maSP;
}
bool SanPham::operator>(const SanPham& sp) const {
    return this->gia > sp.gia;
}
void SanPham::capNhatGia(double giaMoi) {
    gia = giaMoi;
}

// --- Lop con ---

SanPhamCoSoLuong::SanPhamCoSoLuong(string ma, string ten, double g, int sl, string nsx)
    : SanPham(ma, ten, g), soLuong(sl), nhaSanXuat(nsx) {}

SanPhamCoSoLuong::~SanPhamCoSoLuong() {}

void SanPhamCoSoLuong::xuatThongTin() const {
    SanPham::xuatThongTin();
    cout << "So luong: " << soLuong << ", Nha san xuat: " << nhaSanXuat << endl;
}
double SanPhamCoSoLuong::tinhThue() const {
    return gia * 0.05; // ví du thue 5%
}
int SanPhamCoSoLuong::getSoLuong() const {
    return soLuong;
}
void SanPhamCoSoLuong::setSoLuong(int sl) {
    soLuong = sl;
}
double SanPhamCoSoLuong::tinhTongTien() const {
    return gia * soLuong;
}

void SanPhamCoSoLuong::giamGia(double phanTram) {
    if (phanTram > 0 && phanTram <= 100) {
        gia = gia * (1 - phanTram / 100);
   }
}
// Vi du ve san pham dien thoai 
int main() {
    SanPhamCoSoLuong sp("SP01", "Dien thoai", 100, 10, "NSX A");

    sp.xuatThongTin();
    cout << "Thue: " << sp.tinhThue() << endl; 
    cout << "Tong tien: " << sp.tinhTongTien() << endl;

    return 0;
}
