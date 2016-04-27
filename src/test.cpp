#include "genome.h"
#include "search_mite.h"
#include <iostream>

#if COMPILE_WITH_R
#include "R.h"
#endif

int main()
{
  Genome a;
  std::string path_to_file="../data/OSgenomeV6.1";
  a.readGenome(path_to_file);
  search_mite(a);
  return 1;
}


