#include "my_class.h"
#include "queens.h"
#include <iostream>
#include <time.h>

using namespace std;
using namespace N;
using namespace NT;

int main() {
  double startTime = (float)clock() / CLOCKS_PER_SEC;

  /* Do work */

  queens q;
  q.BTR(0);

  cout << endl;
  double endTime = (float)clock() / CLOCKS_PER_SEC;
  double timeElapsed = endTime - startTime;

  cout << "Time elapsed: " << fixed << timeElapsed << endl;
  return 0;
}
