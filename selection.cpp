#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  cout << "Before sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n-1 ; i++)
  {
    int min = i;
    for (int j = i; j < n ; j++)
    {
      if (ar[min] > ar[j])
      {
        min = j;
      }
    }

    swap(ar[min], ar[i]);
  }
  cout << "After sortinf: ";
  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }
  cout << endl;

  return 0;
}