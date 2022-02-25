#include <iostream>

using namespace std;

class bit
{
private:
    int n, pos;

public:
    bit()
    {
    }
    bit(int n, int pos)
    {
        this->n = n;
        this->pos = pos;
    }
    int getbit(int n, int pos)
    {

        return ((n & (1 << pos)) != 0);
    }

    // SET BIT MEANS TO PUT 1 AT THAT POSITION
    int setbit(int n, int pos)
    {
        return (n | (1 << pos));
    }
    int clearbit(int n, int pos)
    {
        int mask = ~(1 << pos);
        return (n & mask);
    }
    int update()
    {
        }
};

int main()
{
    bit b;
    cout << b.getbit(5, 2) << endl;
    cout << b.setbit(5, 1) << endl;
    cout << b.clearbit(5, 1) << endl;
    return 0;
}