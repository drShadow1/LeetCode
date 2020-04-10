#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        for (int i = length-1; i >=0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;

        }
        digits.resize(length + 1);
        digits[0] = 1;
        return digits;
    }
};


int main(void)
{
    Solution s;
    int arr[] = { 9,9,9 };
    vector<int>v;
    v = vector<int>(arr, arr + 3);
    vector<int>vec;
    vec = s.plusOne(v);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

	return 0;
}