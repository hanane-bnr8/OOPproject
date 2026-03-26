#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class person{
    private://we can set it protected but private is better
string firstname;
string familyname;
string phone_number;
char gender;
public:
person();
person(const string&,const string&,char);
const string& getname;
//getters
const string& getfirstname();
const string& getfamilyname();
const string& getphone_number();
char getgender;

//setters

void sefirstname(const string&);
void setfamilyname(const string&);
void setphone_number(const string&);
void setgender();

};
#endif