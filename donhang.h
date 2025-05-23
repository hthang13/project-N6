#ifndef DONHANG_H
#define DONHANG_H
#include <iostream>
#include <vector>
#include <string>
#include "KhachHang.h"
#include "SanPham.h"
using namespace std;

class DonHang {
protected:
    string maDH;
    KhachHang* khach;
    vector<SanPham*> danhSachSP;
    double tongTien;
public:
    DonHang(string ma, KhachHang* kh);
    virtual ~DonHang();

    virtual void xuatThongTin() const;         // xuat thong tin
    virtual double tinhTongTien() const;       // tinh tien
    void themSanPham(SanPham* sp);              // them san pham

    bool operator==(const DonHang& dh) const; 
};

class DonHangOnline : public DonHang {
private:
    string diaChiGiaoHang;
    string ngayGiaoHang;
public:
    DonHangOnline(string ma, KhachHang* kh, string diaChi, string ngayGH);
    ~DonHangOnline();

    void xuatThongTin() const override;
    double tinhTongTien() const override;
};

#endif
