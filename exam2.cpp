#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    int cmd;
    string name;
    string line;
    ofstream WriteFile;
    ifstream ReadFile;

    ofstream myfile ("std.txt");
    if (myfile.is_open())
    {
        myfile << "Worachc Phadphong.\n";
        myfile << "Arnon Ruangsiri.\n";
    }
    else cout << "Unable to oprn file";

    do
    {
        cout << "Menu" << endl;
        cout << "1. add student" << endl;
        cout << "2. list student" << endl;
        cout << "3. qoit" << endl;
        cout << "Please Enter menu: ";
        cin >> cmd;

    if (cmd == 1)
    {
        cout << "Enter std name" << endl;
        cin >> name;
        WriteFile.open("std.txt", fstream::app);

        if (WriteFile.is_open())
        {
            WriteFile << name << endl;
            WriteFile.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
    }
    else if (cmd == 2)
    {
        ReadFile.open("std.txt");
        if (ReadFile.is_open())
        {
            while (getline(ReadFile, line))
            {
                cout << line << endl;
            }
            ReadFile.close()
        }
    }
    else
        {
            break;
        }
    }
    while (1);
    return 0;
}
