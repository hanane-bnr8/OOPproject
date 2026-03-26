#ifndef WORKER_H
#define WORKER_H
#include "person.h"
class worker : public person{
private:
int dormitory;// 1 2 ..
char pavion;
string role;

public:
worker();
worker(int,char,string);
int getdormitory();
int getpavion();
string getrole();
void setdormitory();
void setpavion();
void setrole();
};
#endif