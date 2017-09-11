//address.cpp -- using the & operator to find addresses
#include <iostream>
int main()
{
  using namespace std; //我一般习惯放前面
  int donuts = 6;
  double cups = 4.5;
  
  cout << "donuts value = " << donuts;
  cout << "and dounts address = " << &donuts << endl;
  //NOTE: you may need to use unsigned (&donuts)
  //and unsinged (&cups)
  cout << "cups value = " << cups;
  cout << " and cups address = " << &cups << endl;
  return 0;
}
