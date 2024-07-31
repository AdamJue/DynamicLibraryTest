//
// Created by yunti on 24-7-31.
//

#ifndef STU_H
#define STU_H

#ifdef _DLL_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif

class DLL_API stu {
public:
    stu(int a);
    void print() const;
private:
    int _a;
};



#endif //STU_H
