#include <iostream>

using namespace std;

// intial structure of doctors

struct doctors{
    string name ;
    int age;
    string addres;
    void print(){
        cout<<" name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"address :"<<addres<<endl;
    };
};

int main()
{
    // git the number of doctors
    int number_of_doctors=0;
    cout << "enter number of doctors : "<<endl;
    cin>>number_of_doctors;


    // intial coppies of doctors
    struct doctors doctors[number_of_doctors];


    // take the data of doctors

    for(int i =0; i<number_of_doctors;i++){

        cout<< "------------ enter data of doctor "<<i<<":"<<endl;
        cout<<"enter the name :"<<endl;
        cin>>doctors[i].name;
        cout<<"enter the age :"<<endl;
        cin>>doctors[i].age;
        cout<<"enter the address :"<<endl;
        cin>>doctors[i].addres;
    };


    for(int i =0; i<number_of_doctors;i++){

        cout<< "------------  data of doctor "<<i<<":"<<endl;
        doctors[i].print();

    };
}
