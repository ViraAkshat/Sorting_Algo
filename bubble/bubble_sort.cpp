#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    vector<int> sortThis;
    string line;
    getline(cin >> ws, line);

    stringstream words(line);
    int ekAurVar;
    int k = 0;

    while (words >> ekAurVar)
    {
        sortThis.push_back(ekAurVar);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sortThis[j] > sortThis[j + 1])
            {
                int temp = sortThis[j];
                sortThis[j] = sortThis[j + 1];
                sortThis[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << sortThis[i] << " ";
    }

    return 0;
}
