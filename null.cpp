#include <cstdlib>

char * get_buffer(int size) {
    if (size < 1024) {
        return new char[size];
    }
    else {
        return NULL;
    }
}
