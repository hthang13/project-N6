// KhachHang.h
#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <string>
using namespace std;

class KhachHang {
protected:
    string maKH;
    string tenKH;
    string diaChi;
    string soDienThoai;    // 4 thu?c t�nh
public:
    KhachHang(string ma="", string ten="", string dc="", string sdt="");
    virtual ~KhachHang();

    virtual void xuatThongTin() const;       // 1. Xu?t th�ng tin
    virtual double tinhChietKhau() const;    // 2. T�nh chi?t kh?u (?o)
    bool operator==(const KhachHang& kh) const; // 3. So s�nh theo t�n
    string getTenKH() const;                  // 4. L?y t�n
};

class KhachHangVIP : public KhachHang {
private:
    int mucVIP;
    double diemTichLuy;
public:
    KhachHangVIP(string ma, string ten, string dc, string sdt, int muc, double diem);
    ~KhachHangVIP();

    void xuatThongTin() const override;
    double tinhChietKhau() const override;
    double getDiemTichLuy() const;
};

#endif

