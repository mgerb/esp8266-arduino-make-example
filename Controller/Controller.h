/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Controller_h
#define Controller_h

// include types & constants of Wiring core API
//#include "WConstants.h"

// library interface description
class Controller
{
  // user-accessible "public" interface
  public:
    Controller();
    void doSomething(void);
    void setup(void);
    void start(void);

  // library-accessible "private" interface
  private:
//    void doSomethingSecret(void);
};

#endif

