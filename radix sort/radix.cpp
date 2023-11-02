#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void countSort(vector<int> &nums, int n, int pos)
{
    int digits = 10;

    vector<int> freq(digits, 0);

    for (int i = 0; i < n; i++)
    {
        freq[(nums[i] / pos) % digits]++;
    }

    for (int i = 1; i < digits; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> result(n);
    for (int i = n - 1; i >= 0; i--)
    {
        result[--freq[(nums[i] / pos) % digits]] = nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = result[i];
    }
}

void radixSort(vector<int> &nums, int n)
{
    int pos = 1;
    int max_elem = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_elem = max(max_elem, nums[i]);
    }

    while (max_elem / pos > 0)
    {
        countSort(nums, n, pos);
        pos *= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    string line;
    getline(cin >> ws, line);
    stringstream words(line);

    int data;
    while (words >> data)
    {
        nums.push_back(data);
    }

    radixSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}