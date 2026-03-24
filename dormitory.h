#include<string>
#include "room.h"
#include "student.h"
#include "restaurant.h"
#include<vector>
using namespace std;
#ifndef DORMITORY_H
#define DORMITORY_H
class dormitory{

private:
int namenum;//mehalma1 , 2
char gender;//hte gende of the student in the dorm 
int capacity=500;//the max student / rooms in the dorm
vector<student> students;//array of all the students in the dorm
vector<room> rooms;//array of all the rooms
restaurant restau;
string university[3];//like in mehalma4 there are ensia and nhsm

public:
dormitory();
dormitory()
};
#endif