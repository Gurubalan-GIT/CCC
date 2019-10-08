/*
 * Created Date: Monday July 8th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;

int main(){
string name;
float bs,hra,da,pf,tot,gs;
cin>>name;
cin>>bs;
cin>>hra;
cin>>da;
cout<<"Name: "<<name<<endl;
cout<<"Basic: "<<bs<<endl;
cout<<"HRA: "<<hra<<endl;
cout<<"DA: "<<da<<endl;
pf=(12*bs)/100;
tot=bs+hra+da;
gs=tot+pf;
cout<<"PF: "<<pf<<endl<<"GROSS SALARY: "<<gs<<endl;
return 0;
}