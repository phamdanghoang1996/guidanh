/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   String.h
 * Author: hoang
 *
 * Created on July 29, 2017, 12:47 PM
 */

#ifndef STRING_H
#define STRING_H
#include<iostream>
#include<string.h>
using namespace std;
class String {
private:
  char *chuoi;
  int length;
public:
  String(){

  }
  String(char *s1){
    length = strlen(s1); //Dieu dau tien, kieu char no dem tung phan tu 1
    chuoi = new char[length+1];//Phai khai bao no la bao nhieu
    strcpy(chuoi,s1);//Gan no vang...Oke
  }
  int chieudai(){
    return strlen(chuoi);
  }
  void noichuoi(char chuoinoi[]){
    cout<<"Chuoi sau khi noi la:"<<endl;
    char* total = strcat(chuoi,chuoinoi);
    cout<<total;
    cout<<endl;
  }
  void daochuoi(){
    cout<<"Chuoi sau khi dao la: "<<endl;
    int length_dao = strlen(chuoi);
    cout<<chuoi[23];
    for(int i = length_dao-1;i>=0;i--){
      cout<<chuoi[i];
    }
    cout<<endl;
  }
  void nhapchuoi(){
    
  }
  void xuatchuoi(){

  }
};

#endif /* STRING_H */
