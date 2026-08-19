#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream class
    ofstream write;

    // creat file or open file using open method
    write.open("sanjhi.txt");

    // write data inside file
    write << "hello students" << endl;
    write << "how are you ?" << endl;

    // close file
    write.close();

    return 0;
}