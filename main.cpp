#include <iostream>
using namespace std;
#include "examples/test1/stu.h"

// #pragma comment(lib, "simpleDll.lib")

int main()
{
    stu stu1(222);
    stu1.print();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
