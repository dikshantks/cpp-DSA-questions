class recursion
{
private:
public:
    recursion(){};
    int sum(int n)
    {
        int prevsum = sum(n - 1);
        return n + prevsum;
    }
};
