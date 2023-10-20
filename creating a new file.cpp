#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    string data1;
    ofstream outfile;
    outfile.open("afile.text");

    cout<<"writting to the file"<<endl;
    cout<<"Enter your name: ";
    getline(cin,data1);

    outfile <<data1 <<endl;

    cout<<"Enter your age: ";
    cin>> data1;
    cin.ignore();

    ifstream infile;
    infile.open("afile.text");

    cout<<"Reading from the file"<<endl;
    infile>>data1;

    cout<< data1<<endl;

    infile>> data1;
    cout<< data1<<endl;

    infile.close();

    return 0;
}
