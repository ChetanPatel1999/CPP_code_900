#include <iostream>
// using namespace std;
int main()
{
    int a, b, c;
    std::cout << "enter value of a : "; //( :: )  scop resolution operator
    std::cin >> a;
    std::cout << "enter value of b : ";
    std::cin >> b;
    c = a + b;
    std::cout << "addition = " << c << std::endl;
    return 0;
}