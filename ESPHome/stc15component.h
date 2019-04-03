#include "esphome.h"
#include "esphome/log.h"

using namespace esphome;

class STC15Component: public UARTDevice, public PollingComponent {
 public:
  STC15Component(UARTComponent *parent, uint32_t update_interval = 60000) : UARTDevice(parent), PollingComponent(update_interval)
  {

  }
  sensor::Sensor *temperature = new sensor::Sensor();
  sensor::Sensor *humidity = new sensor::Sensor();

  void setup() override {
    // nothing to do here
  }

  void update() override {
     while (available()) {
      char c = read();
    }

    static const char *TAG = "sensor.stc";
    ESP_LOGCONFIG(TAG, "STC"); 

    write('t');
    float i = parseFloat();
    temperature->publish_state(i);
    LOG_SENSOR(" ", "TEMP", this->temperature);

    write('h');
    i = parseFloat();
    humidity->publish_state(i);
    LOG_SENSOR(" ", "HUM", this->temperature);
  }
};
