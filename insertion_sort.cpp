#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int kye = arr[i];       // i = 1 kye = 2
        int j = i - 1;          // j = 0 val = 5

        while (j >= 0 && arr[j] > kye)
        {
            arr[j + 1] = arr[j];
            j--;               // j = 0
        }


        arr[j + 1] = kye;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}