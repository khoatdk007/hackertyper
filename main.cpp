#include <conio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("text.md");
    char c = ' ';
    char i = ' ';
    do {
        c = getch();
        inFile.get(i);
        cout << i ;
        inFile.get(i);
        cout << i ;
        inFile.get(i);
        cout << i ;
        inFile.get(i);
        cout << i ;
        if (inFile.eof())
        {
            inFile.open("text.md");
        }
    } while ( (c!=27) );
    return 0;
}