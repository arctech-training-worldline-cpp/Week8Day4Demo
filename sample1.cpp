#include <iostream>
#include <fstream>
using namespace std;

int main2323()
{
    fstream fileStream;
    fileStream.open("Sample.txt", ios::in | ios::out | ios::trunc);
    
    fileStream << "hello world!" << endl;
    fileStream.seekp(6);
    cout << "tell p : " << fileStream.tellp() << endl;
    fileStream << "test data" << endl;
    cout << "tell p : " << fileStream.tellp() << endl;
    
    fileStream.seekg(6);
    //reference positions in seekg are set in the second parameter
    //ios::beg, ios::cur, ios::end
    cout << "tell g : " << fileStream.tellg() << endl;

    fileStream.close();
    return 0;
}