#include <vector>
#include <alarm.hh>

class Alarms {
public:
  Alarms() : _alarms() {};
  ~Alarms() {};
  void addAlarm(const Alarm &alarm);
  void evaluate();
private:
  vector<Alarm*> _alarms;
};
