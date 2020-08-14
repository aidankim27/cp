class Solution
{
public:
    int reverse(int64_t x)
    {
        int64_t ans = 0;
        int sign = 1;

        if (x < 0)
        {
            x = -x;
            sign = -1;
        }

        for (int64_t i = 10; x >= 1; i *= 10)
        {
            ans *= 10;
            ans += x % i / (i / 10);
            x -= x % i;
        }
        ans *= sign;

        if (ans > INT_MAX || ans < INT_MIN)
        {
            return 0;
        }
        return ans;
    }
};