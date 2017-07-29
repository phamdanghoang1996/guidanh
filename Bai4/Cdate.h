/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Cdate.h
 * Author: hoang
 *
 * Created on July 28, 2017, 11:24 AM
 */

#ifndef CDATE_H
#define CDATE_H
#include<iostream>
using namespace std;
class Cdate {
private:
  int ngay;
  int thang;
  int nam;
public:
  Cdate(){

  }
  Cdate(int ngay, int thang, int nam){
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
  }
  void nhap(){
    do{
      cout<<"Nhap ngay: "<<endl;
      cin>>ngay;
      cout<<"Nhap thang: "<<endl;
      cin>>thang;
      cout<<"Nhap nam: "<<endl;
      cin>>nam;
    }while(ngay<=0||ngay>30||thang<=0||thang>12);

  }
  void xuat(){
    cout<<"Ngay "<<ngay<<" "<<"Thang "<<thang<<" "<<"Nam "<<nam<<endl;
  }
  void congNgay(int ngay){
    int total = this->nam*365 + this->thang*30 + this->ngay + ngay;
    int t_nam = total/365;
        int t_day_cl1 = total - t_nam*365;
    int t_thang = t_day_cl1/30;
        int t_day_cl2 = t_day_cl1 - t_thang*30;
    int t_ngay = t_day_cl2;
    cout<<"Ngay "<<t_ngay<<" "<<"Thang "<<t_thang<<" "<<"Nam "<<t_nam<<endl;
  }
  void truNgay(int ngay){
    int total = this->nam*365 + this->thang*30 + this->ngay - ngay;
    int t_nam = total/365;
        int t_day_cl1 = total - t_nam*365;
    int t_thang = t_day_cl1/30;
        int t_day_cl2 = t_day_cl1 - t_thang*30;
    int t_ngay = t_day_cl2;
    cout<<"Ngay "<<t_ngay<<" "<<"Thang "<<t_thang<<" "<<"Nam "<<t_nam<<endl;
  }
  void congMotNgay(){
    if(this->ngay==30){
      if(this->thang==12){
        this->ngay = 1;
        this->thang = 1;
        this->nam = this->nam + 1;
        cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
      }
      else{
        this->ngay = 1 ;
        this->thang = this->thang+1;
        cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
      }
    }
    else {
      this->ngay = this->ngay+1;
      cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
    }
  }
  void truMotNgay(){
      if(this->ngay==1){
        if(this->thang==1){
          this->ngay = 30;
          this->thang = 12;
          this->nam = this->nam - 1;
          cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
        }
        else {
          this->ngay = 30;
          this->thang = this->thang - 1;
          cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
        }
      }
      else {
        this->ngay = this->ngay - 1;
        cout<<"Ngay "<<this->ngay<<" "<<"Thang "<<this->thang<<" "<<"Nam "<<this->nam<<endl;
      }
  }
  void khoangCachDay(Cdate khoangDay){
      int total_ngay = (khoangDay.nam-this->nam)*365 + (khoangDay.thang-this->thang)*30 + (khoangDay.ngay-this->ngay);
      cout<<"Khoang cach du 2 thoi diem la: "<<total_ngay<<" "<<"ngay"<<endl;
  }
};

#endif /* CDATE_H */
