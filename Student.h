#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : public Person
{   private:
    int yearLevel;
    std:: string major;
public:

    void setmajor(std:: string major);
    string getmajor();
    void setYearLevel(int YL);
    int getYearLevel();


    void display();
    Student()=default;

    Student(std:: string major,int yearLevel);
    ~Student();
};


#endif 












#endif
