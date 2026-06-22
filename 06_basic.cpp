# include<iostream>
# include<fstream>
using namespace std;
int main(){
    ofstream file("alok.txt",ios::out);
    file<<"hii , i am saurav from bihar my current skills are i know basic frontend like html and css and i want to have some skills in js and frontend "<<endl;
    cout<<sizeof(file);
    return  0;
}