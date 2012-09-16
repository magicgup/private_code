#include <iostream>
#include "a.h"

using namespace std;

#if 1
int A::func() {
    cout << "invoke mock A::func." << endl;
    sleep(1);
    return 5;
}
#endif

#if 1
unsigned int sleep(unsigned int seconds) {
    cout << "invoke mock ::sleep." << endl;
    return 0;
}
#endif

int main() {
    A obj;
    int a = obj.func();
    cout << "a is " << a << endl;
    return a;
}
