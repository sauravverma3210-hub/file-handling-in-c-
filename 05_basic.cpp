# include<iostream>
# include<fstream>
using namespace std;
int main(){
    fstream files("saurav.txt",ios::in);
    string s;
    files>>s;
    // getline(files,s);
    cout<<"reading part is:"<<s;
    return 0;



}