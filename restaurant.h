#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include <vector>
using namespace std;
class restaurant
{
private:
    vector<string> breakfast;
    vector<string> lunch;
    vector<string> dinner;
    int mealsserved;

public:
    restaurant();
    restaurant(vector<string>, vector<string>, vector<string>);
    // setters to update the whole meal evryday
    void setBreakfast(vector<string> breakfast);
    void setLunch(vector<string> lunch);
    void setDinner(vector<string> dinner);
    // getters
    vector<string> getBreakfast();
    vector<string> getLunch();
    vector<string> getDinner();
    int getMealsServed();
    // update all the meals
    void updateMenu(vector<string>, vector<string>, vector<string>);
    void displayMenu();
    void incrementMealsServed(); // when a student takes a meal
    void resetMealsServed();     // daily reset
};
#endif