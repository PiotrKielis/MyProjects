#include <sstream>
#include <iostream>

class Task_Name_Surname
{
public:
    std::string UnpackString(std::string s)
    {
        std::string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                res += s[i];
            else if (s[i] >= '0' && s[i] <= '9')
            {
                int num = 0;
                while (s[i] >= '0' && s[i] <= '9')
                    num = num * 10 + (s[i++] - '0');
                int j = i + 1;
                int cnt = 1;
                while (cnt != 0)
                {
                    if (s[j] == '[')
                        cnt++;
                    else if (s[j] == ']')
                        cnt--;
                    j++;
                }
                std::string t = UnpackString(s.substr(i + 1, j - i - 2));
                for (int k = 0; k < num; k++)
                    res += t;
                i = j - 1;
            }
        }
        return res;
    }
};

int main() {
    Task_Name_Surname task;
    std::string packed_string = "2[eset]3[bc]";
    std::string unpacked_string = task.UnpackString(packed_string);
    std::cout << "Packed string: " << packed_string << std::endl;
    std::cout << "Unpacked string: " << unpacked_string << std::endl;
    return 0;
}
