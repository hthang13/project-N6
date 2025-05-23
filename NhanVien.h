// NhanVien.h
#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NhanVien {
protected:
    string maNV;
    string tenNV;
    double luongCoBan;
    string chucVu;      // 4 thu?c tính
public:
    NhanVien(string ma="", string ten="", double luong=0, string cv="");
    virtual ~NhanVien();

    virtual void xuatThongTin() const;      // 1. Xu?t thông tin
    virtual double tinhLuong(int gioLamViec) const; // 2. Tính luong
    bool operator<(const NhanVien& nv) const;       // 3. So sánh luong
    string getChucVu() const;               // 4. L?y ch?c v?
};

class NhanVienBanHang : public NhanVien {
private:
    double doanhSo;
    int soDonHang;
public:
    NhanVienBanHang(string ma, string ten, double luong, string cv, double ds, int soDH);
    ~NhanVienBanHang();

    void xuatThongTin() const override;
    double tinhLuong(int gioLamViec) const override;
    int getSoDonHang() const;
};

#endif
