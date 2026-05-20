#include <iostream>
#include <utility>

using namespace std;

int main()
{ int arr[] = {1, 2, 3, 4, 5};
  int i=0, j=4;
  while(i<j)
  {
      std::swap(arr[i], arr[j]);
      i++;
      j--;
  }
  for(i=0; i<5; i++)
  {
      std::cout<<arr[i];
  }
  return 0;
}
    