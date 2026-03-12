#include <iostream>

using namespace std;

class student{


    public:
         student( int  id , string  name){

            cout<<"you crated a new object from student class "<<endl;

            this->id=id;
            this->name=name;

        };


        // print

        void print(){

            cout << "student id is :   "<<id<<endl;
            cout << "student name is :  "<< name<<endl;
        };

    private:
        int id;
        string name;

};
int main()
{

    student eslam(10,"eslam shaban gomah");
    student eslam1(10,"eslam shaban gomah");
    student eslam2(10,"eslam shaban gomah");
    student eslam3(10,"eslam shaban gomah");
    student eslam4(10,"eslam shaban gomah");
    student eslam5(10,"eslam shaban gomah");

    eslam.print();
    eslam1.print();
    eslam2.print();
    eslam3.print();
    eslam4.print();
    eslam5.print();

}
