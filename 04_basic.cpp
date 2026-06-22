# include<iostream>
# include<fstream>
using namespace std;
int main(){
    ofstream file("saurav.txt");
    file<<"hello, saurav kumar singh i hope you are doing well and your dsa journey will be exicteful and peaceful";
    fstream files("GFG.txt",ios::out);
    files<<"saurav is from bihar (khagaria) and his future goal is to becomes a data scientist:";
    return 0;


}
