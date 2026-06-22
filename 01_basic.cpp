# include<iostream>
# include<fstream>
using namespace std;

int main() {
    ofstream saurav("example.txt");

    
        saurav<< "Hello, World!" << endl;
        saurav.close();
    
    return 0;
}