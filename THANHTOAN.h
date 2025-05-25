#ifndef THANHTOAN_H
#define THANHTOAN_H

#include <iostream>
#include <string>
using namespace std;

class ThanhToan {
protected:
    string loai;
    double phi;
    string moTa;
public:
    ThanhToan(string l = "", double p = 0.0, string mt = "");
    virtual ~ThanhToan();

    virtual void thanhToan(double tien) const = 0; 
    virtual void hienThiPhi() const;
    string getLoai() const;

    ThanhToan* operator+(const ThanhToan& t) const; 
};

class ThanhToanTienMat : public ThanhToan {
private:
    double soTienMatKhachDua;
public:
    ThanhToanTienMat(double phi = 0.0, double tienKhachDua = 0.0);
    void thanhToan(double tien) const override;
    void hienThiPhi() const override;
    void setSoTienMatKhachDua(double tien);
    double getSoTienMatKhachDua() const;
};

#endif
