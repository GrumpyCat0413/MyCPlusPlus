#include <stdio.h>

class Test
{
private:
    int mi;
public:
    Test(int i)
    {
        mi = i;
        printf("Test(int i): %d\n", mi);
    }
    Test(const Test& obj)
    {
        mi = obj.mi;
        printf("Test(const Test& obj): %d\n", mi);
    }
    int getMi()
    {
        return mi;
    }
};

int main()
{
    int i = 0;
    Test a1 = i; // Test(int i): 0
        
    while( i < 3 )
    {
        Test a2 = ++i; // Test(int i): 1, 2, 3
    }
goto End;       
        Test a(100);
End:
    printf("a.mi = %d\n", a.getMi());
    return 0;
}
