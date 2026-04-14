#include <memory>
#include <iostream>

class Student {
public:
        std::string_name_;
        double mt_, final_;
        std::vector<double> homeworks_;
        void read(std::istream& is);
        void print(std::ostream& os);
};
