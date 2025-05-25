#include "ThanhToan.h"

ThanhToan::ThanhToan(string l, double p, string mt) : loai(l), phi(p), moTa(mt) {}
ThanhToan::~ThanhToan() {}

void ThanhToan::hienThiPhi() const {
    cout << "Loai: " << loai << ", Phi: " << phi << ", Mo ta: " << moTa << endl;
}

string ThanhToan::getLoai() const {
    return loai;
}
ThanhToan* ThanhToan::operator+(const ThanhToan& t) const {

    ThanhToanTienMat* result = new ThanhToanTienMat();
    result->loai = loai + "+" + t.loai;
    result->phi = phi + t.phi;
    result->moTa = moTa + "; " + t.moTa;
    result->setSoTienMatKhachDua(0); 
    return result;
}

ThanhToanTienMat::ThanhToanTienMat(double phi, double tienKhachDua)
    : ThanhToan("Tien Mat", phi, "Thanh toan truc tiep bang tien mat"),
      soTienMatKhachDua(tienKhachDua) {}

void ThanhToanTienMat::thanhToan(double tien) const {
    cout << "Thanh toan tien mat: Tong tien = " << tien + phi << " VND" << endl;
    cout << "So tien khach dua: " << soTienMatKhachDua << " VND" << endl;
    cout << "Tien thoi lai: " << (soTienMatKhachDua - (tien + phi)) << " VND" << endl;
}

void ThanhToanTienMat::hienThiPhi() const {
    ThanhToan::hienThiPhi();
}

void ThanhToanTienMat::setSoTienMatKhachDua(double tien) {
    soTienMatKhachDua = tien;
}

double ThanhToanTienMat::getSoTienMatKhachDua() const {
    return soTienMatKhachDua;
}



