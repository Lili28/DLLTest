// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <wtypes.h>
#include <vector>
//#include <numeric>
#include <algorithm>
//#include <iterator>
//#include <functional>
#include<boost/function.hpp>

bool any_of()
{
    std::vector<std::string> vec = {
        "Hi", "Hello"
    };

    return std::any_of(vec.begin(), //set bp here
        vec.end(), 
        [](const std::string& str) 
        {
        return str.size() == 4;
        });
}


int main()
{
    bool b = any_of();
   // typedef int (*pTest)();
   // HINSTANCE hDLL;
   // pTest test ;
   // hDLL = LoadLibrary(L"C:\\Users\\vsdiagtester\\source\\repos\\ConsoleApplication1\\Debug\\Dll1.dll");//加载动态链接库MyDll.dll文件；
   // //hDLL = LoadLibrary(L"C:\\Users\\vsdiagtester\\source\\repos\\ConsoleApplication1\\Debug\\NativeComServer.dll");//加载动态链接库MyDll.dll文件；
   ////
   // DWORD error_id = GetLastError();
   // test = (pTest)GetProcAddress(hDLL, "Test");
   // int A = test();

   // std::cout << A;
   // FreeLibrary(hDLL);//卸载MyDll.dll文件；
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
