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
  net.readUsers("example/path3.txt");

  // cout << net.shortestPath(2,0).size() << endl;
  assert(net.shortestPath(0, 2).size() == 3);
  assert(net.shortestPath(2, 0).size() == 3);
  assert(net.shortestPath(0, 1).size() == 2);
  assert(net.shortestPath(1, 0).size() == 2);
  assert(net.shortestPath(1, 2).size() == 2);
  assert(net.shortestPath(1, 2).size() == 2);
  assert(net.shortestPath(1, 1).size() == 1);
  assert(net.shortestPath(0, 0).size() == 1);
  assert(net.shortestPath(2, 2).size() == 1);
  return 0;
}
