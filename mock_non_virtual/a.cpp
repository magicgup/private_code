#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "a.h"

using namespace std;
int A::func() {
    cout << "invoke real A::func." << endl;
    sleep(1);
    return 3;
}
