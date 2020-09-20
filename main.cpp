#include <iostream>

using namespace std;

int fib(int n)
{
    if (n < 2) {
        return n;
    }
    return n + (n - 1);
}

int main()
{
    cout << "hello" << endl;
    int x = 3;
    cout << "fib(" << x << ") " << fib(x) << endl;
    return 0;
}
