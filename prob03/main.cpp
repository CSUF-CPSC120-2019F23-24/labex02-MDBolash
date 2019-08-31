// Matthew Dao:
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()
{
  double total;
  double cost;
  // Get the food cost.
  std::cout << "What is the meal's 'cost' ? ";
  std::cin >> cost;
  double tax = cost * 0.0775;
  double tip = cost * 0.20;
  // Calculate the cost of the meal.
  total = cost+tax+tip;

  // Display the cost of the meal with tax and tip.
  std::cout << "The \"total\" of the bill with tax and tip included is " << total << "$.";

  return 0;
}
