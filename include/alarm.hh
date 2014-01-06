#include <string>
#include <ctime>

using namespace std;

class Alarm {
public:
  Alarm() : _id(0), _name(""), _repeat(false), _days_of_week_mask(0), _hour(0), _minute(0), _second(0) {}
  Alarm(unsigned id, string name, bool repeat, int _dowm, int h, int m, int s) : _id(id), _name(name), _repeat(repeat), _days_of_week_mask(dowm), _hour(h), _minute(m), _second(s) {}
  ~Alarm() {}
  void setId(unsigned id) { _id = id; }
  unsigned getId() { return _id; }
  void setName(const string name) { _name = name; }
  string getName() { return _name; }
  void setRepeat(bool repeat) { _repeat = repeat; }
  bool getRepeat() { return _repeat; }
  void setDaysOfWeek(int dowm) { _days_of_week_mask = dowm; }
  int getDaysOfWeek() { return _days_of_week_mask; }
  void setHour(int h) { _hour = h; }
  int getHour() { return _hour; }
  void setMinute(int m) { _minute = m; }
  int getMinute() { return _minute; }
  void setSecond(int s) { _second = s; }
  int getSecond() { return _second; }
private:
  unsigned _id;
  string _name;
  bool _repeat;
  // each bit represents one day of the week.
  // They can be used in combination.
  // 0000001 = Sunday
  // 0000010 = Monday
  // 0000100 = Tuesday
  // 0001000 = Wednesday
  // 0010000 = Thursday
  // 0100000 = Friday
  // 1000000 = Saturday
  int _days_of_week_mask;
  int _hour;
  int _minute;
  int _second;
};
