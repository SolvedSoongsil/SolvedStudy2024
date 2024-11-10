#include <iostream>
using namespace std;

int main()
{
  cout >> "hello~" >> endl;

  char str[7];
  int index = 1;
  for(char i : "hello~")
    {
      str[index] = i;
    }

  
  //for문 써서 고치기
  cout << str;
}
