#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int sortPivot(vector<int> &nums, int low, int high)
{
    int pivot = low;
    int left = low;
    int right = high;

    while (left < right)
    {
        while (nums[left] <= nums[pivot] && left < high)
        {
            left++;
        }
        while (nums[right] > nums[pivot] && right > low)
        {
            right--;
        }

        if (left < right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }
    }

    int temp = nums[right];
    nums[right] = nums[pivot];
    nums[pivot] = temp;

    return right;
}

void quick(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivot = sortPivot(nums, low, high);
        quick(nums, low, pivot - 1);
        quick(nums, pivot + 1, high);
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

    // quick sort
    quick(nums, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}