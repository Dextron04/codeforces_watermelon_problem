#include <iostream>

using namespace std;

int main()
{
  int watermelon;
  cout << "Enter the weight of the watermelon: ";
  cin >> watermelon;

  if(watermelon % 2 == 0 && watermelon < 2){
        cout << "YES" << endl;
  } else{
        cout << "NO" << endl;
  }


    return 0;
}
