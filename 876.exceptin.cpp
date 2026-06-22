# include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"enter the value of age";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        {
            cout<<"age is gerater than 18 so you can vote";
        }
    }
        catch(int x){
            cout<<"exception caught"<<endl;
            cout<<"age is less than 18 so you can't vote";
        }



    
    return 0;
}