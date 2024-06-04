#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target > element)
        {
            start = mid + 1;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 6;
    int target = 5;

    int targetofindex = binarysearch(arr, size, target);
    if (targetofindex == -1)
    {
        cout << "target not found";
    }
    else
    {
        cout << "target found at"
             << " " << targetofindex << " "
             << "index";
    }
}