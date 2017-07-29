/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: hoang
 *
 * Created on July 28, 2017, 8:28 AM
 */

#include <cstdlib>
#include <iostream>
#include "CTimeSpan.h"
#include "Ctime.h"
#include "Cdate.h"
#include "CDathuc.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
  // cout<<"-----------------------------------------------------"<<endl;
  // cout<<"LOP CTIMESPAN"<<endl;
  // CTimeSpan ct_bd;
  // CTimeSpan ct_kt;
  // ct_bd.nhap();
  // ct_bd.xuat();
  // ct_kt.nhap();
  // ct_kt.xuat();
  // cout<<"-----------------------------------------"<<endl;
  // cout<<"TONG THOI GIAN"<<endl;
  // ct_bd.cong(ct_kt);
  // cout<<"HIEU THOI GIAN"<<endl;
  // ct_bd.tru(ct_kt);
  // cout<<"SO SANH THOI GIAN"<<endl;
  // ct_bd.sosanh(ct_kt);
  // cout<<"-----------------------------------------------------"<<endl;
  // cout<<"LOP CTIME_H"<<endl;
  // cout<<"Mac dinh la 10h:10phut:10giay"<<endl;
  // Ctime ctime_kt(10,10,10);
  // int ctime_giay;
  // cout<<"Nhap giay: "<<endl;
  // cin>>ctime_giay;
  // cout<<"PHEP CONG: "<<endl;
  // ctime_kt.cong(ctime_giay);
  // cout<<"PHEP TRU: "<<endl;
  // ctime_kt.truGiay(ctime_giay);
  // cout<<"PHEP TRU 1 KHOANG THOI GIAN: "<<endl;
  // CTimeSpan ctimeSpan;
  // ctime_kt.truKhoangThoigian(ctimeSpan);
  // cout<<"TOAN TU ++: "<<endl;
  // Ctime toantucong;
  // toantucong.nhap();
  // toantucong.themGiay();
  // cout<<"TOAN TU --: "<<endl;
  // Ctime toantutru;
  // toantutru.nhap();
  // toantutru.truGiay();
  // cout<<"-----------------------------------------------------"<<endl;
  // cout<<"LOP CDATE_H"<<endl;
  // cout<<"Mac dinh la ngay: 19/10/1996"<<endl;
  // Cdate cdate1(19,10,1996);
  // Cdate cdate2(19,10,1996);
  // int soNgay;
  // cout<<"PHEP CONG NGAY"<<endl;
  // cout<<"Nhap ngay: "<<endl;
  // cin>>soNgay;
  // cdate1.congNgay(soNgay);
  // cout<<"PHEP TRU NGAY"<<endl;
  // cdate2.truNgay(soNgay);
  // cout<<"TOAN TU CONG 1 NGAY: "<<endl;
  // Cdate toantucongngay;
  // toantucongngay.nhap();
  // toantucongngay.congMotNgay();
  // cout<<"TOAN TU TRU 1 NGAY: "<<endl;
  // Cdate toantutrungay;
  // toantutrungay.nhap();
  // toantutrungay.truMotNgay();
  // cout<<"KHOANG CACH GIUA 2 THOI DIEM:"<<endl;
  // Cdate khoangcach;
  // khoangcach.nhap();
  // khoangcach.khoangCachDay(cdate1);

  // cout<<"-----------------------------------------------------"<<endl;
  // cout<<"LOP CDATHUC.H"<<endl;
  // CDathuc dathuc;
  // dathuc.nhapDathuc();

  CDathucCon con;
  con.thongBao();
}
