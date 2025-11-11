#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

//#write Person class here
class Person
{
private:
   std:: string name;
    int id;
public:
    void setname(std:: string name);
    string getname();
    void setid(int id);
    int getid();


    Person()=default;
    Person(std:: string name, int id);
    ~Person();
    void display();


};


#endif 











#endif
