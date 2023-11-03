#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void heapify(vector<int> &nums);

void heap_delete(vector<int> &nums);

void heap_sort(vector<int> &nums);

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

    heap_sort(nums);

    return 0;
}