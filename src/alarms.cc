#include <alarms.hh>

void
Alarms::addAlarm(const Alarm &alarm) {
  _alarms.push_back(new Alarm(alarm));
}

void
Alarms::evaluate() {
  if (!_alarms.empty()) {
    for (vector<Alarm>::iterator it = _alarms.begin(); it != _alarms.end(); it++) {
      // Add evaluation code here
    }
  }
}
