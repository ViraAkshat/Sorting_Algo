#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string line;
    getline(cin >> ws, line);

    int data;
    vector<int> nums;
    stringstream words(line);
    while (words >> data)
    {
        nums.push_back(data);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (nums[j - 1] > nums[j])
            {
                int temp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}