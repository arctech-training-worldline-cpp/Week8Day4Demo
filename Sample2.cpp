#include <iostream>
#include <fstream>

using namespace std;

int main4545()
{
    fstream fileStream;
    fileStream.open("Sample.txt", ios::in | ios :: out | ios::trunc);

    string str;
    cout << "Enter a string" ;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        fileStream.put(str[i]);
    }
    
    fileStream.seekg(0);
    char ch;
    
    fileStream.get(ch); 
    while (fileStream)
    {
        cout << ch;    
        fileStream.get(ch);    
    }
    fileStream.close();
    return 0;
}