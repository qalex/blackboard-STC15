#include "esphome.h"
using namespace esphome;

class STC15FloatOutput : public Component, public UARTDevice, public output::FloatOutput {
 public:
  char pre;
  STC15FloatOutput(UARTComponent *parent, const char prefix)
    :UARTDevice(parent)
  {
      pre = prefix;
  }
  void setup() override {
    // This will be called by App.setup()
    //pinMode(5, OUTPUT);
  }

  void write_state(float state) override {
    unsigned int v = (unsigned int) (state * 255.0);
    char packet[8];
    packet[0] = pre;
    sprintf(&packet[1],"%d", v);
    for (int i=0; i<4; i++) {
        write(packet[i]);
    }
  }
};
