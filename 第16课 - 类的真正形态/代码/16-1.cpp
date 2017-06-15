#include <stdio.h>

struct A
{
    // defualt to public
    int i;
    // defualt to public
    int getI()
    {
        return i;
    }
};

class B
{
    // defualt to private
    int i;
    // defualt to private
    int getI()
    {
        return i;
    }
};

int main()
{
    A a;
    B b;
    
    a.i = 4;
    
    printf("a.getI() = %d\n", a.getI());
    
    b.i = 4;
    
    printf("b.getI() = %d\n", b.getI());
    
    return 0;
}
