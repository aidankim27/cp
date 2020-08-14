#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, lengthstr, zeros;
    string j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        zeros = 0;
        cin >> j;
        lengthstr = j.length();
        //        cout << "len: " << lengthstr;
        for (int c = 0; c < lengthstr; ++c)
        {
            if (j[c] == '0')
            {
                zeros += 1;
            }
        }
        //        cout << "zeros: " << zeros;
        int ones = lengthstr - zeros;
        if (zeros < ones)
        {
            if (zeros % 2 == 0)
            {
                cout << "NET" << endl;
            }
            else
            {
                cout << "DA" << endl;
            }
        }
        else
        {
            if (ones % 2 == 0)
            {
                cout << "NET" << endl;
            }
            else
            {
                cout << "DA" << endl;
            }
        }
    }

    return 0;
}
