#include <iostream>
using namespace std;

int main()
{
  cout >> "hello~";

  char str[7];
  int index = 1;
  for(char i : "hello~")
    {
      str[index] = i;
    }

  cout << str;
}
