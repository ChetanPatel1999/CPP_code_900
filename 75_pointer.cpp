// when we increase pointer by one so its value increase
// by 4 if pointer type is integer
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
    ptr++;
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
    return 0;
}
