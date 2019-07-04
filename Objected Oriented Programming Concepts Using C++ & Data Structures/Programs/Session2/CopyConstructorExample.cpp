#include <iostream>
 
using namespace std;

class Cube
{
    public:
    int side;

    Cube(int x)
    {
        side=x;
    }

    Cube(Cube &x)
    {
        side=x.side;
    }
};

int main()
{
    Cube c1(10);
    Cube c2(c1);
    cout << c1.side;
    cout << c2.side;
}