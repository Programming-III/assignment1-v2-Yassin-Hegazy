#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

#include "Person.h"
Person::Person(std::string name,int id)
{
this->name=name;
this->id=id;    
}
string Person:: getname()
{
return name;
    
}
void  Person:: setname(std:: string n)
{
n=name;
    
}
void  Person ::setid(int ID){
id=ID;
    
};
int Person::getid()
{
return id;
    
};
void Person::display()
{
    cout<<"name ="<<name<<"id is "<<id;
}
Person::~Person()
{
}






// ==================== Student Class Implementation ====================
Student::Student(string major,int yearLevel)
{
this->major=major;
 this->yearLevel=yearLevel;   

    
}
void Student:: setmajor(std:: string major)
{
major=major;
 
};
string Student ::getmajor()
{
return major;
 
};
void Student ::setYearLevel(int YL)
{
yearLevel=YL;
 
};
int  Student ::getYearLevel()
{
return yearLevel;
 
};
Student::~Student(){};
void Student::display()
{
cout<<"student name is "<< getname()<< "major is "<< major<<"His yaer level is "<< yearLevel<<"his id is "<<getid();
 
}





// ==================== Instructor Class Implementation ====================


instructor::instructor(std:: string department ,int experienceYears )
{
this->experienceYears=experienceYears;
this->department =department;

};
void instructor::setXP(int XP)
{
    experienceYears=XP;
};


int instructor:: getXP()
{
    return experienceYears;
};
void instructor:: setdepartment(std:: string department)
{
department=department;

};
string  instructor::getdepartment()
{
    return department;
};
void instructor::display()
{
    cout<<"this is the instructors departmet "<<department<<"This is his expreince years"<<experienceYears<<"instructor name is "<< getname()<<"his id is "<<getid();
}
instructor::~instructor(){};



// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
