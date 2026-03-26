#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "room.h"
#include <string>
using namespace std;
class student : public person
{
    private:
int academic_year;
string university;
room assignedroom;
bool hadmeal;
int id;
public:
student();
student(int,string,room,bool,int);
const string& getuniversity();
const room& getassignedroom();
int getid();
bool gethadmeal();
void setuniversity(const string&);
void setassignedroom(const room&);
void setid(int);
void sethadmeal(bool);//this should be updayed after the student gets a meal automatically 
};
#endif