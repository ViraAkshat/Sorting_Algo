#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

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

    return 0;
}