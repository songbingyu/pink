#ifndef PIKA_SIMPLE_THREAD_H_
#define PIKA_SIMPLE_THREAD_H_

#include "pink_thread.h"
using namespace pink;

class PikaSimpleThread : public Thread
{
public:
  PikaSimpleThread(int num);
  virtual ~PikaSimpleThread();

  int num() {
    return num_;
  }

private:
  virtual void* ThreadMain();
  int num_;

};

#endif
