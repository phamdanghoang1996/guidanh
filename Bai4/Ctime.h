/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ctime.h
 * Author: hoang
 *
 * Created on July 28, 2017, 11:23 AM
 */

#ifndef CTIME_H
#define CTIME_H
#include<iostream>
#include "CTimeSpan.h"
using namespace std;
class Ctime : public CTimeSpan {
private:
  int gio;
  int phut;
  int giay;
public:
  Ctime(){

  }
  Ctime(int gio, int phut, int giay){
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
  }
  void nhap(){
    do{
      cout<<"Nhap gio: "<<endl;
      cin>>gio;
      cout<<"Nhap phut: "<<endl;
      cin>>phut;
      cout<<"Nhap giay: "<<endl;
      cin>>giay;
    }while(gio>24||gio<0||phut>59||phut<0||giay>59||giay<0);
  }
  void cong(int giay){
    //Day la cai cach Ngu Xuan nhat minh tung lam
    Ctime tong;
    int t_minute = 0;
    int t_second = 0;
    if(giay>=3600){
      int t_hour = giay/3600;
      tong.gio = this->gio + t_hour;
      int t_hour_d = giay%3600;
      if(t_hour_d>=60){
        t_minute = t_hour_d/60;
        t_second = t_hour_d%60;
        tong.phut = this->phut + t_minute;
        tong.giay = this->giay + t_second;
        cout<<tong.gio<<"h:"<<tong.phut<<"ph: "<<tong.giay<<"giay"<<endl;
      }
      else {
        tong.gio = this->gio + t_hour;
        tong.giay = this->giay + t_hour_d;
        cout<<tong.gio<<"h:"<<tong.phut<<"ph: "<<tong.giay<<"giay"<<endl;
      }
    }
    else {
      t_minute= giay/60;
      t_second = giay%60;
      if(t_minute==0){
        tong.giay = this->giay + giay;
        cout<<tong.gio<<"h:"<<tong.phut<<"ph: "<<tong.giay<<"giay"<<endl;
      }
      else {
        tong.phut = this->phut + t_minute;
        tong.giay = this->giay + t_second;
        cout<<tong.gio<<"h:"<<tong.phut<<"ph: "<<tong.giay<<"giay"<<endl;
      }
    }
  }
  void truGiay(int giay){
    //Co ve tien bo hon....
    Ctime hieu;
    int total_giay = this->gio*3600 + this->phut*60 + this->giay - giay;
    int t_hour = total_giay/3600;
            int total_giay_cl1 = total_giay - t_hour*3600;
    int t_minute =  total_giay_cl1/60;
            int total_giay_cl2 = total_giay_cl1 - t_minute*60;
    int t_second = total_giay_cl2;
    hieu.gio = t_hour;
    hieu.phut = t_minute;
    hieu.giay = t_second;
    cout<<hieu.gio<<"h:"<<hieu.phut<<"ph: "<<hieu.giay<<"giay"<<endl;
  }
  void truKhoangThoigian(CTimeSpan t_khoang){
    t_khoang.nhap();
    int total_giay = (this->gio - t_khoang.gio)*3600 + (this->phut-t_khoang.phut)*60 + (this->giay-t_khoang.giay);
    cout<<"Khoang thoi gian sau khi tru: "<<total_giay<<endl;
  }
  void themGiay(){
    if(this->giay==59){
      if(this->phut=59){
        this->giay = 0;
        this->phut = 0;
        this->gio = this->gio+1;
        cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
        cout<<endl;
      }
      else {
        this->giay = 0;
        this->phut = this->phut +1;
        cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
        cout<<endl;
      }

    }
    else {
      this->giay = this->giay+1;
      cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
      cout<<endl;
    }
  }
  void truGiay(){
    if(this->giay==0){
      if(this->phut==0){
        this->giay==59;
        this->phut = 0;
        this->gio = this->gio-1;
        cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
        cout<<endl;
      }
      else {
        this->giay = 59;
        this->phut = this->phut - 1;
        cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
        cout<<endl;
      }

    }
    else {
      this->giay = this->giay - 1;
      cout<<this->gio<<"h:"<<this->phut<<"ph: "<<this->giay<<"giay"<<endl;
      cout<<endl;
    }
  }
};

#endif /* CTIME_H */
