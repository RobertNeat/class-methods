#include "Person.h"
#include <cstring>//string.h
#include <iostream>
using namespace std;

Person::Person()
{
    strncpy(name,"FirstName",19);
    surname="Surname";
    bornDate.y=1995;
    bornDate.m=10;
    bornDate.d=23;
    cout<<endl<<"-------------------------------------"<<endl;
          cout<<"# Default constructor                #";
    cout<<endl<<"-------------------------------------"<<endl<<endl;
}

Person::Person(char* nm,string srnm,date brnDate){
    strncpy(name,nm,19);
    surname=srnm;
    bornDate.y=brnDate.y;
    bornDate.m=brnDate.m;
    bornDate.d=brnDate.d;

    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Overloaded constructor                #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
}

void Person::input(){
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Input method                          #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
    cout<<"Input name:";
    cin>>name;
    cout<<"Input surname:";
    cin>>surname;
    cout<<"Date:"<<endl<<"Year:";
    cin>>bornDate.y;
    cout<<"Month:";
    cin>>bornDate.m;
    cout<<"Day:";
    cin>>bornDate.d;
}

void Person::output(){
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Output method                         #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
cout<<"Name:"<<name<<endl<<"Surname:"<<surname<<endl;
cout<<"Year:"<<bornDate.y<<endl;
cout<<"Month:"<<bornDate.m<<endl;
cout<<"Day:"<<bornDate.d<<endl;
}

void Person::output(int currYear){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Output method overloaded                  #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;

cout<<"Name:"<<name;
cout<<endl<<"Surname:"<<surname;
cout<<endl<<"Age:"<<currYear-bornDate.y<<endl;
}

void Person::info(){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Info method                              #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;

cout<<"Person had/will have 18 yrs in year: "<<bornDate.y+18<<endl;
}

void Person::info(int currYear){
    cout<<endl<<"--------------------------------------------"<<endl;
          cout<<"# Overloaded info method                   #";
    cout<<endl<<"--------------------------------------------"<<endl<<endl;
    age=currYear-bornDate.y;
    if(age<18){
       cout<<"Person is child"<<endl;
    }
    if(age==18){
       cout<<"Person is in age of consent"<<endl;
    }
    if(age>18 && age<50){
       cout<<"Person is 30+"<<endl;
    }
    if(age>50){
       cout<<"Person is 50+"<<endl;
    }
}

Person::~Person()
{
    cout<<endl<<"----------------------------------------"<<endl;
          cout<<"# Destructor                           #";
    cout<<endl<<"----------------------------------------"<<endl<<endl;
}
