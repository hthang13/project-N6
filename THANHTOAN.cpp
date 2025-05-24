#include <iostream>
#include "ThanhToan.h"
using namespace std;
ThanhToan::ThanhToan(string l, double p, string mt) : loai(l), phi(p), moTa(mt) {}

ThanhToan::~ThanhToan() {}

void ThanhToan::thanhToan(double tien) const {
    cout << "Thanh toan bang " << loai << ", so tien: " <<  tien + phi << endl;
}

void ThanhToan::hienThiPhi() const {
    cout << "Phi: " << phi << " - Mo ta: " << moTa << endl;
}

string ThanhToan::getLoai() const {
    return loai;
}

ThanhToan ThanhToan::operator+(const ThanhToan& t) const {
    return ThanhToan(loai + " + " + t.loai, phi + t.phi, moTa + " & " + t.moTa);
}
int main() {
  
    ThanhToan dienThoai("Tien mat", 0, "Thanh toan khi mua dien thoai");

    ThanhToan laptop("The tin dung", 15000, "Thanh toan khi mua laptop");

    dienThoai.thanhToan(300000); 
    laptop.thanhToan(400000);   

    laptop.hienThiPhi();

    ThanhToan tong = dienThoai + laptop;

    tong.hienThiPhi();
    tong.thanhToan(700000); 
    return 0;
}


