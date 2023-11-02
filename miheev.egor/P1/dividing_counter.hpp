#ifndef DIVIDING_COUNTER_H
#define DIVIDING_COUNTER_H
#include <cstddef>

namespace miheev
{
  struct DevidingCounter
  {
  public:
    DevidingCounter(int previous);
    void checkFirstPrevious() const;
    void operator() (int current);
    size_t getCounter() const;
    bool getIfSeqLongEnough() const;
    int getPrevious() const;

  private:
    size_t counter_;
    bool seqIsLongEnough_;
    int previous_;
  };
}
#endif

