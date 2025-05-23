#ifndef SANPHAM_H
#define SANPHAM_H
#include <iostream>
#include <string>
using namespace std;

class SanPham {
protected:
    string maSP;
    string tenSP;
    double gia;
public:
    SanPham(string ma = "", string ten = "", double g = 0);
    virtual ~SanPham();

    virtual void xuatThongTin() const;  // Tính da h́nh: phuong thuc ao
    virtual double tinhThue() const = 0; // Phuong thuc thue là thuan ao (bat buoc lop con override)

    string getMaSP() const;
    double getGia() const;

    // Quá tai toán tu so sánh giá
    bool operator>(const SanPham& sp) const;

    // Tính nang 1: cap nhat giá
    void capNhatGia(double giaMoi);
};

class SanPhamCoSoLuong : public SanPham {
private:
    int soLuong;
    string nhaSanXuat;
public:
    SanPhamCoSoLuong(string ma, string ten, double g, int sl, string nsx);
    ~SanPhamCoSoLuong();

    void xuatThongTin() const override;  // Ghi dè phuong thuc
    double tinhThue() const override;     // Ghi dè phuong thuc

    int getSoLuong() const;
    void setSoLuong(int sl);

    // Tính nang 2: tính tong tien
    double tinhTongTien() const;

    // Tính nang 3: giam giá theo phan tram
    void giamGia(double phanTram);
};
#endif
