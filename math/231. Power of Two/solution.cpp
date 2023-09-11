#include <bits/stdc++.h>
class Solution {
public:
    /**
    * isPowerOfTwo - return true if it is a power of two. Otherwise, return false
    * @n : the integer
    * Return: true or false
    */
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return ((n & (n - 1)) == 0);
    }
};
