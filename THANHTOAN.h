// PhuongThucThanhToan.h
#ifndef PHUONGTHUCTHANHTOAN_H
#define PHUONGTHUCTHANHTOAN_H

#include <iostream>
#include <string>
using namespace std;

class PhuongThucThanhToan {
public:
    virtual ~PhuongThucThanhToan() {}
    virtual void thanhToan(double tien) const = 0;
};

class ThanhToan : public PhuongThucThanhToan {
protected:
    string loai;
    double phi;
    string moTa;
public:
    ThanhToan(string l, double p, string mt);
    ~ThanhToan();

    void thanhToan(double tien) const override;    // 1. Thanh toán
    void hienThiPhi() const;                        // 2. Hi?n th? phí
    string getLoai() const;                         // 3. L?y lo?i thanh toán

    ThanhToan operator+(const ThanhToan& t) const; // Quá t?i c?ng
};

#endif

