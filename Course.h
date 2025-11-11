#ifndef COURSE_H
#define COURSE_H
#include "Student.h"
#include <string>
#include "Student.h"
using namespace std;
//#write your code here





class Course
{
private:
string Courscode;
   string Coursename;
   int maxStudents;
   Student *student;
   int CurrentStudents;
public:
    Course()=default;
    Course(string Courscode,string Coursename,int maxStudents,Student *student, int CurrentStudents);
    ~Course();
void addStudent(const Student & s);
void Displaycourseinfo();
  string getCoursecode();
    string getCoursename();
    int getmaxstudents();
    int getCurrentStudents();
    void setCoursecoode(string Coursecode);
    void setCoursename(string Coursename);
    void setmaxstudents(int maxstudents);
    void setCurrentstudents(int Currentstudents);


};


#endif 









#endif
