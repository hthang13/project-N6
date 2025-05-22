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
    string soDienThoai;    
public:
    KhachHang(string ma="", string ten="", string dc="", string sdt="");
    virtual ~KhachHang();

    virtual void xuatThongTin() const;       
    virtual double tinhChietKhau() const;    
    bool operator==(const KhachHang& kh) const; 
    string getTenKH() const;                  
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
