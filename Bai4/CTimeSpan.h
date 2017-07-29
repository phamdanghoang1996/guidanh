/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CTimeSpan.h
 * Author: hoang
 *
 * Created on July 28, 2017, 8:37 AM
 */

#ifndef CTIMESPAN_H
#define CTIMESPAN_H
#include <iostream>
using namespace std;
class CTimeSpan {
public:
    int gio;
    int phut;
    int giay;

    void nhap(){
        cout<<"Nhap gio: "<<endl;
        cin>>gio;
        cout<<"Nhap phut: "<<endl;
        cin>>phut;
        cout<<"Nhap giay: "<<endl;
        cin>>giay;
    }
    void xuat(){
        cout<<gio<<"h:"<<phut<<"':"<<giay<<"''";
        cout<<endl;
    }
    void cong(CTimeSpan ct){
      CTimeSpan tong;
      tong.gio = this->gio + ct.gio;
      tong.phut = this->phut + ct.phut;
      tong.giay = this->giay + ct.giay;
      int khoangTG = tong.gio*3600 + tong.phut*60 + tong.giay;
      cout<<"Khoang thoi gian sau khi cong la: "<<khoangTG<<endl;
    }
    void tru(CTimeSpan ct){
      CTimeSpan hieu;
      hieu.gio = this->gio - ct.gio;
      hieu.phut = this->phut - ct.phut;
      hieu.giay = this->giay - ct.giay;
      int khoangTG = hieu.gio*3600 + hieu.phut*60 + hieu.giay;
      cout<<"Khoang thoi gian sau khi tru: "<<khoangTG<<endl;
    }
    void sosanh(CTimeSpan ct){
      int tongBD = this->gio *3600 + this->phut * 60 + this->giay;
      int tongKT = ct.gio * 3600 + ct.phut*60 + ct.giay;
      if(tongBD==tongKT){
        cout<<"2 khoang thoi gian bang nhau"<<endl;
      }
      if(tongBD>tongKT){
        cout<<"Khoang thoi gian dau lon hon"<<endl;
      }
      if(tongBD<tongKT) {
        cout<<"Khoang thoi gian ket thuc lon hon"<<endl;
      }
    }

};

#endif /* CTIMESPAN_H */
