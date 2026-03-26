#ifndef ROOM_H
#define ROOM_H

class room
{

private:
    char pavion;
    int etage;
    int door;
    bool availability;

public:
   room();
   room(char , int , int , bool);
   char getpavion();
   int getetage();
   int getdoor();
   bool getavailability();
   void setpavion(char);
   void setetage(int);
   void setdoor(int);
   void setavalability(bool);
};
#endif