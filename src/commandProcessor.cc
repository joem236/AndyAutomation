/*
 * Requirements
 * Accept a sentence as input such as: create an alarm for 05:00:00
 * Break up the sentence into words
 * find a way to make a decision on what to do with the individual words and commands
 */
 
void parse(const std::string &sentence) {
 std::vector<std::string> words;
 unsigned pos = 0, oldPos = 0;
 while (pos < sentence.size()) {
  pos = sentence.find(" ", oldPos);
  words.push_back(sentence.substr(oldPos, (pos - oldPos)));
  oldPos = pos;
 }
}
