#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person* person1= new Person;

        person1->input();
        person1->output();

    delete person1;

    //pointer for constructor to use
    char *a=new char;
    char Fname[20]="John";
    a=Fname;
        date Date;
        Date={1960,6,23};
        /*
        Date.y=1960;
        Date.m=6;
        Date.d=23;
        */

    Person* person2= new Person(a,"Kovalsky",Date);
        person2->output();
        person2->info();
        person2->info(2021);
    delete person2;

    return 0;
}
