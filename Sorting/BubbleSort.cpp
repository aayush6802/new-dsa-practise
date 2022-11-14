#include <bits/stdc++.h>
using namespace std;
void swapM(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void printArr(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {-4, -5, 5, 3, 0};
    bubbleSort(arr);
    printArr(arr);
    return 0;
}