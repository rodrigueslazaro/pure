/********************************
 * THE STAIRCASE PROBLEM
 * Given a set of blocks n, what's the maximum height
 * I can achieve building a staircase which uses:
 * {1, 2, 3, ...} blocks in each level of construction?
 * Also, how many blocks are used, and how many are left
 * (those that where not enough to create a new level)?
********************************/

#include<iostream>
#include<vector>
using namespace std;

vector<int> possibleStairs(int blocks) {
  int level = 1;
  int allblocks = blocks;
  while (blocks >= level) {
    blocks -= level;
    level++;
  }
  vector<int> result = {allblocks-blocks, level-1, level-(level-blocks)};
  return result;
}

int main() {
  vector<int> result;
  cout << "[blocks used, max height, rest]" << endl;
  for (int i=0; i<20; i++) {
    result = possibleStairs(i);
    cout << i << " blocks: " << "["
         << result[0] << ", "
         << result[1] << ", "
         << result[2] << "]" << endl;
  }
  return 0;
}
