#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class emp
{
private:
    char name[30];
    int ecode;

public:  
    emp()
    {}
    emp(const char *n, int c)
    {
        strcpy(name, n);
        ecode = c;
    }    
};

int main2323()
{
    emp e[4];
    e[0] = emp("Amit", 1);
    e[1] = emp("Amit1", 2);
    e[2] = emp("Amit2", 3);
    e[3] = emp("Amit3", 4);

    fstream fileStream;
    fileStream.open("Employee.txt", ios::in | ios::out | ios::trunc);

    for (int i = 0; i < 4; i++)
    {
        fileStream.write((char *) &e[i], sizeof(e[i]));
    }

    fileStream.seekg(0, ios::end);
    int end = fileStream.tellg();

    cout << end << endl;
    cout << sizeof(emp);
    cout << end / sizeof(emp);


    fileStream.close();
    return 0 ;
}



