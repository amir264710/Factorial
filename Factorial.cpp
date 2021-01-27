#include <iostream>
using namespace std;
int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    else {
        return x*factorial(x-1);
    }

}

int norfac(int z) {
    int i=1;
    while (z > 0) {
        i *= z;
        z--;
    }
    return i;

}
int main() {
factorial(5);
norfac(5);
}