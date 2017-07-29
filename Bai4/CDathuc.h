/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CDathuc.h
 * Author: hoang
 *
 * Created on July 28, 2017, 11:24 AM
 */

#ifndef CDATHUC_H
#define CDATHUC_H
#include <iostream>
using namespace std;
class CDathuc {
private:
  int bac;
  double x;
  double y;
public:
  void nhapDathuc(){
    cout<<"Da thuc co dang : "<<endl;
  }
  void thongBao(){
    cout<<"Cha"<<endl;
  }
};

class CDathucCon : public CDathuc{
public:
  void thongBao(){
    cout<<"Con"<<endl;
  }
};
#endif /* CDATHUC_H */
