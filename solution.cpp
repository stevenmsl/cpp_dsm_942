#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol942;
using namespace std;

/*takeaways
  - whenever you see an 'I', pick the smallest one from the
    remaining numbers as it will guarantee the next
    number will be greater than the current one you
    are picking. Conversely pick the largest when
    you see a 'D'
  - don't forget to add the leftover in
*/
vector<int> Solution::findMatch(string S)
{
  const int N = S.size();
  auto small = 0, large = N;
  auto result = vector<int>();

  for (auto c : S)
    if (c == 'I')
      /* make sure the next guy comining along is bigger than
         this number
      */
      result.push_back(small++);
    else
      result.push_back(large--);

  /* the small or large will be pointing at the same
     very last number as there will be no one else
     left to pick (you have picked n of them already)
  */
  result.push_back(large);

  return result;
}