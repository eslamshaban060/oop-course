#include <iostream>

using namespace std;


struct student {
    string name;
    int age;
    int id;

};

struct teacher {
    string name;
    int age;
    int id;

};

int main()
{
    // add data of 2 students

    struct student student1;
    struct student student2;

     student1.name="eslam shaban ";
     student1.age=22;
     student1.id=1;

     student2.name="adel shaban ";
     student2.age=18;
     student2.id=2;

    // add data of teacher
    struct teacher teacher1;

    teacher1.name="shaban gomah ";
    teacher1.age=44;
    teacher1.id=1;


    // to display data

    cout<< "---------------  students data -------------"<<endl;
    cout<<"======== student1========= "<<endl;
    cout<<student1.name<<endl;
    cout<<student1.age<<endl;
    cout<<student1.id<<endl;
    cout<<"======== student2========= "<<endl;
    cout<<student2.name<<endl;
    cout<<student2.age<<endl;
    cout<<student2.id<<endl;
    cout<< "---------------  teacher data -------------"<<endl;
    cout<<"======== teacher1========= "<<endl;
    cout<<teacher1.name<<endl;
    cout<<teacher1.age<<endl;
    cout<<teacher1.id<<endl;
}
