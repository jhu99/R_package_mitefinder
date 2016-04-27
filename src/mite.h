#ifndef MITE_H_
#define MITE_H_

class Mite
{
public:
  int start;
  int tirLen;
  int tsdLen;
  int wholeLen;
  int pChrom;
  Mite(){}
  Mite(int st,int tir,int tsd,int who,int pchr)
  {
    start=st;
    tirLen=tir;
    tsdLen=tsd;
    wholeLen=who;
    pChrom=pchr;
  }
  ~Mite(){}
};
#endif