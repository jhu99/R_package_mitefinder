#ifndef GENOME_H_
#define GENOME_H_

// [[Rcpp::plugins(cpp11)]]
#include <string>
#include <vector>
#include <array>

class Genome
{
private:
  // Vector of chromosomes
  std::vector<char*> vecChrom;
  // Vector of the line number of each chromosome.
  std::vector<int> sizeChrom;
  // maximum bases for a line
  int maxLength;
  int numChrom;
public:
  Genome();
  ~Genome();
  // Read genome from a file in the fasta fromat.
  void readGenome(std::string path_to_file);
  int getNumChrom();
};

#endif
