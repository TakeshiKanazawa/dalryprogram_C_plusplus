
#include <iostream>
using namespace std;
int main(void)
{
  int num = 1;
  while (true)
  {
    int x;
    cin >> x;
    if (x != 0)
    {
      cout << "Case " << num << ": " << x << "\n";
      num++;
    }
    else
    {
      break;
    }
  }
}