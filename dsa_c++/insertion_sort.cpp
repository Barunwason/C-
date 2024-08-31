#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 1, 10, 5, 2};
    int temp;
    for (int i = 1; i < 5; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}