#include "null.h"
#include <iostream>
#include <cstdio>

using namespace std;

char * get_buffer_main(int size) {
    if (size < 1024) {
        return new char[size];
    }
    else {
        return NULL;
    }
}

int main() {
    int size = 100;
    char *p = get_buffer(size);
    p[0] = '\0';
    snprintf(p, size, "%s", "aaaa");
    cout << p << endl;
    //delete[] p;

    char *p2 = get_buffer_main(size);
    p2[0] = '\0';
    snprintf(p2, size, "%s", "bbbb");
    cout << p2 << endl;
    //delete[] p2;
    
    char *p3 = new char[size];
    p3[0] = '\0';
    snprintf(p3, size, "%s", "ccc");
    cout << p3 << endl;
    //delete[] p3;


    return 0;
}
