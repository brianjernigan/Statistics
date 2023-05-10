/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 * Project UID 5366c7e2b77742d5b2142097e51561a5
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

void test_sum_small_data_set();
void test_mode();

int main() {
  test_sum_small_data_set();
  test_mode();

  return 0;
}

void test_sum_small_data_set() {
  cout << "test_sum_small_data_set" << endl;

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "SUM PASSED!" << endl;
}

void test_mode() {
    vector<double> testV = {2,3,4,4,5,3,2,1,5,4};
    vector<double> testV2 = {2,2,2,3,4,4,5,3,1,5,4};
    assert(mode(testV) == 4);
    assert(mode(testV2) == 2);
    assert(mode({1,2,3}) == 1);
    assert(mode({1,1,2,2}) == 1);
    assert(mode({2,2,1,1}) == 1);
    assert(mode({1,2,1,2}) == 1);
    assert(mode({1,2,1,2,2}) == 2);
    
    cout << "MODE PASSED!" << endl;
}
