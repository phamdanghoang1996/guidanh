/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ReadFile.h
 * Author: hoang
 *
 * Created on July 29, 2017, 2:43 PM
 */

#ifndef READFILE_H
#define READFILE_H
#include<string.h>
#include<istream>
#include<fstream>
using namespace std;
class ReadFile {
private:
  char text[2000];
  string tenfile;
public:
    void read(){
    ifstream readmyfile;
    readmyfile.open("file.txt");
    if(!readmyfile.is_open()){
      cout<<"Khong the mo file dau"<<endl;
    }
    else {
      for(int i=0;i<=2000;i++){
        readmyfile>>text[i];
      }
    }
    for (int j = 0; j<=2000;j++){
      cout<<text[j];
    }
    readmyfile.close();
  }
  void countCau(){
      for(int i=0;i<=2000;i++){
        cout<<text[i];
      }
  }

};

#endif /* READFILE_H */
