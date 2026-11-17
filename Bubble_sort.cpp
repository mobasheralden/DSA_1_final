#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}