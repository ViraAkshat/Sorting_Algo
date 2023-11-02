#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void countSort(vector<int> &nums, int n)
{
    int max_elem = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_elem = max(max_elem, nums[i]);
    }

    vector<int> freq(max_elem + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 1; i <= max_elem; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> result(n);
    for (int i = n - 1; i >= 0; i--)
    {
        result[--freq[nums[i]]] = nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = result[i];
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

    countSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}