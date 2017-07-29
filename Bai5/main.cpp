/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: hoang
 *
 * Created on July 29, 2017, 12:47 PM
 */

#include <cstdlib>
#include"String.h"
#include<iostream>
#include<string.h>
#include"ReadFile.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
  // char ten[] = "Pham Dang Hoang - 14520315";
  // String string(ten);
  // cout<<"CHIEU DAI CHUOI LA: "<<string.chieudai()<<endl;
  // //-----------------------------------------------------------
  // char baitap[] = "Bai tap thuc hanh buoi 2";
  // String string_noi(baitap);
  // //...........................................................
  // string.noichuoi(baitap);
  // //...........................................................
  // string_noi.daochuoi();
  // //...........................................................
  // cout<<"Nhap chuoi: "<<endl;
  // String chuoinhap;
  // chuoinhap.nhapchuoi();
  // cout<<"Chuoi xuat: "<<endl;
  // chuoinhap.xuatchuoi();
  // cout<<"----------------------------------------"<<endl;
   cout<<"BAI TAP 2: "<<endl;
   ReadFile myfile;
   cout<<"Doc file"<<endl;
   myfile.read();
   cout<<"So luong cau trong doan van ban la: "<<endl;
   myfile.countCau();

}
