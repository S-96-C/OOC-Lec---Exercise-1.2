#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  float radius, perimeter, area;

  cout << "Radius =";
  cin >> radius;

  perimeter = 2 * 22/7 * radius;
  area = 22/7 * (radius * 2);

  cout << "Perimeter =" << fixed << setprecision(2) << perimeter << endl;

  cout << "Area =" << fixed << setprecision(2) << area << endl;

  return 0;
  
}