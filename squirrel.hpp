#ifndef SQUIRREL_H
#define SQUIRREL_H
#include <string>

class Squirrel {
  private:
    std::string name;

  public:
    Squirrel(std::string name) {
      this->name = name;
    }
    Squirrel(){
      this->name = "";
    };

    std::string get_name() {
      return this->name;
    }
};

#endif // SQUIRREL_H