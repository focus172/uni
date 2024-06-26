#include "network.h"
#include "user.h"
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

  Network net;
  net.readUsers("example/k4.txt");

  vector<vector<int>> groups = net.groups();
  // cout << groups.size() << endl;
  // cout << groups[0].size() << endl;
  assert(groups.size() == 1);
  assert(groups[0].size() == 4);
  return 0;
}
