#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int mini(vector<int> nums, int idx)
{
    int min_idx = idx;

    while (idx < nums.size())
    {
        if (nums[idx] <= nums[min_idx])
        {
            min_idx = idx;
        }
        idx++;
    }

    return min_idx;
}

void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
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

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = mini(nums, i);
        swap(nums, i, min_idx);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}