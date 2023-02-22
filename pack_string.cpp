#include <sstream>
#include <iostream>
class Task_Piotr_Kielis {
 public:
  std::string PackString(const std::string& s) {
    std::string res;
    int i = 0;
    while (i < s.size()) {
      int j = i + 1;
      while (j < s.size() && s[j] == s[i]) j++;
      int cnt = j - i;
      std::stringstream count;
      count << cnt;
      if (cnt > 1) {
        res += count.str() + "[" + s[i] + "]";
      } else {
        res += s[i];
      }
      i = j;
    }
    return res;
  }
};
int main() {
    Task_Piotr_Kielis task;
    std::string unpacked_string = "aaabbbcccc";
    std::string packed_string = task.PackString(unpacked_string);
    std::cout << "Unpacked string: " << unpacked_string << std::endl;
    std::cout << "Packed string: " << packed_string << std::endl;
    return 0;
}
