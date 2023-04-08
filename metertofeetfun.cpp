#include <iostream>
using namespace std;

float feet(float m, float f) {
  float result;
    result = m * 3.281;
  return result;
}

int main () {
  float m, f;

  cout << "Enter Meter: ";
  cin >> m;

  cout << feet(m, f);
  return 0;
}