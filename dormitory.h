
#ifndef DORMITORY_H
#define DORMITORY_H
#include <string>
#include "room.h"
#include "student.h"
#include "restaurant.h"
#include "worker.h"
#include <vector>
// in the parameterized constructor how to deal with vectors just initiallize them as empty arrays
using namespace std;
class dormitory
{

private:
    int namenum;              // mehalma1 , 2
    char gender;              // hte gende of the student in the dorm
    int capacity;             // the max student / rooms in the dorm
    vector<student> students; // array of all the students in the dorm
    vector<room> rooms;       // array of all the rooms
    restaurant restau;
    vector<string>university; // like in mehalma4 there are ensia and nhsm
    vector<worker>workers;

public:
    dormitory();
    dormitory(int, char, int, restaurant);
    void setGender(char gender);
    void setCapacity(int capacity);
    void setRooms(vector<room> rooms);
    void setStudents(vector<student> students);
    void setUniversity(vector<string> );
    void setworkers(vector<worker>);
    char getgender();
    int getcapacity();
   const vector<room>& getrooms();
   const vector<room>& getavailablerooms();//returning a const reference to preser encapsulation and performance 
   const vector<student>& getstudents();
   const vector<string>&getuniversity();
    void addstudent(student);
    const vector<worker> getworkers();
    void addworker(worker);

};
#endif