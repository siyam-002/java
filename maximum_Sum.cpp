#include <iostream>
#include <algorithm>
using namespace std;

int crossSum(int a[], int low, int mid, int high)
{
    int leftSum = -1000000;
    int sum = 0;

    for (int i = mid; i >= low; i--)
    {
        sum += a[i];
        leftSum = max(leftSum, sum);
    }

    int rightSum = -1000000;
    sum = 0;

    for (int i = mid + 1; i <= high; i++)
    {
        sum += a[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}

int maxSubarray(int a[], int low, int high)
{
    if (low == high)
        return a[low];

    int mid = (low + high) / 2;

    int left = maxSubarray(a, low, mid);
    int right = maxSubarray(a, mid + 1, high);
    int cross = crossSum(a, low, mid, high);

    return max({left, right, cross});
}
    
int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = 9;

    cout << maxSubarray(a, 0, n - 1);

    return 0;
}