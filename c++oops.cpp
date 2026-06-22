# include<iostream>
using namespace std;
class dog{
    public:
    string name;
    int rollno;
    float marks;
    dog(string n ,int r , float m){
       name=n;
       rollno=r;
       marks=m;
    }
    void displaydata(){
        cout<<"name is:"<<name<<endl;
        cout<<"roll no is:"<<rollno<<endl;
        cout<<"marks is:"<<marks<<endl;
    }

};
