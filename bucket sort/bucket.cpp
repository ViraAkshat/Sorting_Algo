#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void bucketSort(vector<float> &nums, int n)
{
    // step1: normalize
    float max_elem = nums[0];
    float min_elem = nums[0];

    for (int i = 0; i < n; i++)
    {
        max_elem = max(max_elem, nums[i]);
        min_elem = min(min_elem, nums[i]);
    }

    // val = (val-min)/(max-min) * n

    vector<vector<float>> bucket(n, vector<float>());

    for (int i = 0; i < n; i++)
    {
        int index = (nums[i] - min_elem) / (max_elem - min_elem);
        float diff = (nums[i] - min_elem) / (max_elem - min_elem) - index;

        if (diff == 0 && nums[i] != min_elem)
        { // to tackle boundary values, when max corresponds to index n
            bucket[index - 1].push_back(nums[i]);
        }
        else
        {
            bucket[index].push_back(nums[i]);
        }
    }

    // sort the buckets internally
    for (int i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // gather the elements
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            nums[k++] = bucket[i][j];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<float> nums;

    string line;
    getline(cin >> ws, line);
    stringstream words(line);

    float data;
    while (words >> data)
    {
        nums.push_back(data);
    }

    bucketSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}