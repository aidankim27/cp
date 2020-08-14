#include <iostream>

using namespace std;

int main()
{
    int lst[5] = {5, 3, 77, 5, 1};
    int smallest, holder;

    for (int i = 0; i < 5; ++i)
    {
        smallest = i;
        for (int j = i + 1; j < 5; ++j)
        {
            if (lst[j] <= lst[smallest])
            {
                smallest = j;
            }
        }
        holder = lst[i];
        lst[i] = lst[smallest];
        lst[smallest] = holder;
    }
    for (int a = 0; a < 5; ++a)
    {
        cout << lst[a] << " ";
    }
}