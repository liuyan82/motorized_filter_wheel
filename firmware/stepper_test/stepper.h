#ifndef _stepper_h_
#define _stepper_h_

class CommonStepper {
  public:
    virtual void setup() = 0;
    virtual void loop() = 0;
};

#endif // _stepper_h_
