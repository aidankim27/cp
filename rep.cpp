#include <iostream>
#include <string>
using namespace std;

int FindLongestSeq(string s)
{
    int largest = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        int x;
        bool check;
        check = true;
        x = 1;
        while (check == true)
        {
            if (s[i] == s[i + 1])
            {
                x += 1;
                i += 1;
            }
            else
                check = false;
        }
        if (x >= largest)
        {
            largest = x;
        }
    }
    return largest;
}
int main()
{
    string n;
    cin >> n;
    int longest = FindLongestSeq(n);
    cout << longest;
    return 0;
}