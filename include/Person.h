#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

struct date{
int y,m,d;
};

class Person
{
private:
    char name[20];
    string surname;
    date bornDate;
    int age;//for info method
public:
    Person();
    Person(char* name,string surname,date bornDate);
    ~Person();
    void input();
    void output();
    void output(int currentYear);
    void info();
    void info(int consentAge);
protected:
};

#endif // PERSON_H
