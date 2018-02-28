
#include <iostream>
#include <vector>
#include <json.hpp>

using json = nlohmann::json;
using std::vector;

int main(int argc, char **argv) {
  json test = "{\"blah\": [[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]]}"_json;
  vector<vector<double>> test_vec;// = test["blah"];
  test_vec = test["blah"].get<vector<vector<double>>>();

  for(auto &a: test_vec) {
    for(auto b: a)
      std::cout << b << " ";
    std::cout << std::endl;
  }
  return 0;
}
