#ifndef POLE_H
#define POLE_H
#include "dormitory.h"
class pole{
vector<dormitory> dorms;
public:
pole();
void setpole(const vector<dormitory>&);
const vector<dormitory>& getpole();
};
#endif