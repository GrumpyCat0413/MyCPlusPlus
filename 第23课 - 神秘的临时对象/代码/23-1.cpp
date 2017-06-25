#include <stdio.h>

class Test {
    int mi;
public:
    Test(int i) {
        mi = i;
    }
    Test() {
        Test(0);
    }
    void print() {
        printf("mi = %d\n", mi);
    }
};


int main()
{
    Test t;
    
    t.print();

    return 0;
}
