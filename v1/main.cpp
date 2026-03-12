#include <iostream>

using namespace std;


struct student
   {
       string name;
       int age;

   };

   struct postion
   {
       double x;
       double z;

   };


int main()
{

    int y=0;

    struct student student[5];

    student[0].name="adel shaban";
    student[0].age=18;
    student[1].name="malak shaban";
    student[1].age=12;
    student[2].name="eslam shaban";
    student[2].age=22;
    student[3].name="mona shaban";
    student[3].age=14;
    student[4].name="hager shaban";
    student[4].age=16;



    cout<<"enter numbers"<<endl;
    cin>>y;

    struct postion postion[y];

    for(int i =0; i<y;i++){
        postion[i].x=((i+500)-200)/7.5;
        postion[i].z=((i+300)-100)/17.5;

    };

    for(int i=0;i<y;i++){
        cout<< "-------------- postion"<< i<<"---------------"<<endl;
        cout<<postion[i].x<<endl;
        cout<<postion[i].z<<endl;
    };
    // print result

    //for(int i =0;i<5;i++)
   // {
      //  cout<< "-------------- student"<< i<<"---------------"<<endl;
     //   cout<<student[i].name<<endl;
       // cout<<student[i].age<<endl;

    //};


    return 0;
}
