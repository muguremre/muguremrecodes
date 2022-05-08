#include <iostream>
#include<stdlib.h>
//This is my CRUD(Create,Read,Update,Delete) program
using namespace std;
//I created a student program for the university
struct Student{

    int number;
    string name;
    string study;
    char sex;


};
//First Updating name
void Studentnamechange(Student *oldname,string newname){

        oldname ->name= newname;

}
//Creating a student
    void Makenewstudent(Student *newstudent,string newname,int newnumber){

        newstudent->name = newname;
        newstudent->number=newnumber;


    }
    //Read the student
    void Saythestudent(Student *student){
        student->number=333333;
        student->name="Lionel Messi";
        student->study="Computer Engineering";
        student->sex='M';
        cout<<student->number<<endl<<student->name<<endl<<student->study<<endl<<student->sex<<endl;


    }
    //Delete the student
    void DeleteStudent(Student *student){
        student->name="There is no such student.";
        student->number=0;
    }
    int main()
{
    Student ogr1,ogr2,ogr3,ogr4;


    ogr1.name="Muhammed Ugur Emre";
        ogr1.number=123456;
            ogr1.study="software engineer";
                ogr1.sex='M';

    Studentnamechange(&ogr1,"Emre Ugur Muhammed");
            cout<<ogr1.name<<endl;

    Makenewstudent(&ogr2,"John allice",111111);
        cout<<ogr2.name<<endl<<ogr2.number<<endl;

    Saythestudent(&ogr3);

        ogr4.name="Brad Pitt";
        ogr4.number=444444;
        DeleteStudent(&ogr4);
            cout<<ogr4.name<<endl<<ogr4.number<<endl;

    return 0;
}
