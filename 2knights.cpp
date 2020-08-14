#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    //find  inside layer not counting outside 2
    uint64_t n;
    cin >> n;
    for (uint64_t k = 1; k <= n; ++k)
    {
        uint64_t pos;
        pos = k * k;
        cout << (pos * (pos - 9) + 24 * k - 16) / 2 << endl;
    }
    return 0;
}