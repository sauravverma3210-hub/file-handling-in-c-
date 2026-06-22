# include<iostream>
using namespace std;
class saurav{
 public:
 void add(int a, int b){
    cout<<a+b<<endl;
 }
 void add(double a,double b){
    cout<<a+b<<endl;
 }
 void add(float a,float b){
    cout<<a+b;
 }
 

};
int main(){
    saurav alok;
    alok.add(65,76);
    alok.add(87.76,77.987);
    alok.add(76.9876,87.985);


    return 0 ;
    

 }