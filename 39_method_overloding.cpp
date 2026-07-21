#include <iostream>
using namespace std;
class display
{
public:
    void disp(int data)
    {
        cout << "data : " << data << endl;
    }
    void disp(string data)
    {
        cout << "data : " << data << endl;
    }
    void disp(float data)
    {
        cout << "data : " << data << endl;
    }
};
int main()
{
    display obj;
    obj.disp(12);
    obj.disp(8);
    obj.disp("home");
    obj.disp(5.6f);
    return 0;
}