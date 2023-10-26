// Thomas Skolnick
// tommyskolnick@csu.fullerton.edu
// @Tommy3523
// Partners: @mel427, @FaithDoan
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int number_argument{static_cast<int>(arguments.size()) - 1};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply one arguments.\n";
    return 1;
  }

  bool first(true);
  double sum(0.0);
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    } else {
      double number{std::stod(argument)};
      sum = sum + number;
    }
  }

  double average{0.0};
  average = sum / number_argument;

  std::cout << "average = " << average << "\n";

  return 0;
}
