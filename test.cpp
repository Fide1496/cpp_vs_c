#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    
    string line;

    cout <<"Enter 'quit' to end the program" << endl;

    while(1)
    {
        cout << "Please enter a line of text"<< endl;
        getline(cin, line);

        if (line == "quit")
            break;
    }
    
    
    return 0;
}