#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include "Person.h"
using namespace std;
//#write Instructor class here




class instructor:public Person
{
std:: string department;
 int experienceYears;
public:
 void setXP(int XP);
 int getXP();
 void setdepartment(std:: string department);
 string getdepartment();

 instructor()=default;
 instructor(std:: string department ,int experienceYears );
 ~instructor();
void display();
};


#endif 







#endif
