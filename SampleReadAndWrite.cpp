#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fileStream;
    fileStream.open("Sample.txt", ios::in | ios::out | ios::trunc);

    float height[4] = {12.45, 34.7, 45.9, 22.5};
    fileStream.write((char *) &height, sizeof(height));

    for (int i = 0; i < 4; i++)
    {
        height[i] = 0;
    }

    fileStream.read((char *) & height, sizeof(height));
    for (int i = 0; i < 4; i++)
    {
        cout << height[i] << endl;
    }
    

    fileStream.close();

    return 0;
}
