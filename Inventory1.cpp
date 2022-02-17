#include <iostream>
#include <fstream>
using namespace std;

class Inventory{
    char name[10];
    int code;
    float cost;
    public : 
        void readdata(void); //read data from keyboard 
        void writedata(void); //formatted display on screen
};
void Inventory :: readdata()
{
    // cout << "Enter name : ";
    // cin >> name;
}

void Inventory :: writedata()
{
    //cout << name;
    //display formatted data in table format - three columns - Name, code, Cost
}

int main676()
{
    Inventory items[3];
    //use readdata to populate each item
    //write each item to file

    //go to begining of the file

    //read each item from the file
    //display each item using writedata
    return 0;
}