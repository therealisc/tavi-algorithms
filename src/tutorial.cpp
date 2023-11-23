#include <iostream>
#include <string>
#include "my_class.h"

using namespace std;
using namespace N;

void demof(string x)
{
    string mystring = x;
    cout << mystring << endl;
}

void smalm(int a, int b)
{
    int result;
    a = a + 1;
    result = a - b;

    cout << result << endl;
}

int main ()
{
    smalm(10, 23);

    string mystring;
    mystring = "Test";

    demof(mystring);
    //my_class mc;
    //mc.do_something();

    return 0;
}
