#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream write;
    write.open("C:\\Users\\PC\\Desktop\\ravi\\square.txt", _S_app);
    int num, square;
    cout << "enter a num : ";
    cin >> num;
    square = num * num;
    cout << "square of " << num << " = " << square << endl;
    write << "square of " << num << " = " << square << endl;
    write.close();
    return 0;
}