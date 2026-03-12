#include <iostream>

using namespace std;


class workers{

public:
        string name;
        int age;
        int salary;


        void setter (string name, int age, int salary){

            this ->name=name;
            this ->age=age;
            this ->salary=salary;

        };

        void shower (){

            cout <<"============== data of worker ===========" <<endl;
            cout << "name :"<<name<<endl;
            cout << "age :"<<age<<endl;
            cout << "salary :"<<salary<<endl;
        };
};

class managers{

public:
    string name;
    int age;
    double salary;
    int groube_number;


      void setter (string name, int age, double salary,int groube_number){

            this ->name=name;
            this ->age=age;
            this ->salary=salary;
            this ->groube_number=groube_number;

        };

        void shower (){

            cout <<"============== data of worker ===========" <<endl;
            cout << "name :"<<name<<endl;
            cout << "age :"<<age<<endl;
            cout << "salary :"<<salary<<endl;
            cout << "groube_number :"<<groube_number<<endl;

        };
};

int main()
{
    // data of workers
    workers worker_num_1;
    workers worker_num_2;
    worker_num_1.setter("eslam shaban", 22 ,80000);
    worker_num_2.setter("adel shaban",17,40000);
    worker_num_1.shower();
    worker_num_2.shower();


    //data of managers
    managers manager_num_1;
    managers manager_num_2;
    manager_num_1.setter("shaban gomah",44,100000,2);
    manager_num_2.setter(" gomah abdellatif ",44,200000,1);
    manager_num_1.shower();
    manager_num_2.shower();
}
