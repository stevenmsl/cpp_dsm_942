#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol942;

/*
Input: "IDID"
Output: [0,4,1,3,2]
*/
tuple<string, vector<int>>
testFixture1()
{
  auto A = vector<int>{0, 4, 1, 3, 2};
  return make_tuple("IDID", A);
}

/*
Input: "III"
Output: [0,1,2,3]
*/
tuple<string, vector<int>>
testFixture2()
{
  auto A = vector<int>{0, 1, 2, 3};
  return make_tuple("III", A);
}

/*
Input: "DDI"
Output: [3,2,0,1]
*/
tuple<string, vector<int>>
testFixture3()
{
  auto A = vector<int>{3, 2, 0, 1};
  return make_tuple("DDI", A);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<1>(f))
       << ": " << Util::toString(sol.findMatch(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<1>(f))
       << ": " << Util::toString(sol.findMatch(get<0>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<1>(f))
       << ": " << Util::toString(sol.findMatch(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}