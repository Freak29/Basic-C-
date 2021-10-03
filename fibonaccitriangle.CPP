#include <iostream>
using namespace std;
int main()
{
  int a = 0, b = 1, i, c, n, j;
  int arr[100];
  arr[0] = b;
  b = a;
  cout << "Enter the limit: ";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 0; j < i; j++)
    {
      cout << arr[j] << " ";
    }
    arr[i] = arr[i - 1] + b;
    b = arr[i - 1];

    cout << "\n";
  }
}