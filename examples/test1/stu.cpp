//
// Created by yunti on 24-7-31.
//

#define _DLL_EXPORTS
#include "stu.h"
#include <iostream>
using  namespace std;
stu::stu(int a)
{
    this->_a = a;
}

void stu::print() const
{
    cout << "a = " << this->_a << endl;
}