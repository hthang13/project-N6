#include "DonHang.h"

DonHang::DonHang(string ma, KhachHang* kh) : maDH(ma), khach(kh), tongTien(0) {}

DonHang::~DonHang() {
    delete khach;
    for (auto sp : danhSachSP)
        delete sp;
}
void DonHang::xuatThongTin() const {
    cout << "Ma DH: " << maDH << endl;
    khach->xuatThongTin();
    cout << "Danh sach san pham:" << endl;
    for (auto sp : danhSachSP)
        sp->xuatThongTin();
    cout << "Tong tien: " << tinhTongTien() << endl;
}
double DonHang::tinhTongTien() const {
    double sum = 0;
    for (auto sp : danhSachSP)
        sum += sp->getGia();
    return sum;
}
void DonHang::themSanPham(SanPham* sp) {
    danhSachSP.push_back(sp);
}
bool DonHang::operator==(const DonHang& dh) const {
    return this->maDH == dh.maDH;
}

DonHangOnline::DonHangOnline(string ma, KhachHang* kh, string diaChi, string ngayGH)
    : DonHang(ma, kh), diaChiGiaoHang(diaChi), ngayGiaoHang(ngayGH) {
	}

DonHangOnline::~DonHangOnline() {}

void DonHangOnline::xuatThongTin() const {
    DonHang::xuatThongTin();
    cout << "Dia chi giao hang: " << diaChiGiaoHang << ", Ngay giao hang: " << ngayGiaoHang << endl;
}

double DonHangOnline::tinhTongTien() const {
    return DonHang::tinhTongTien() + 30000; 
}
