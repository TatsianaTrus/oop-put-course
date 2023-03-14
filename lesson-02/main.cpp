#include <iostream>
using namespace std;
class car {
public:
  float length;
  float width;
  float height;
  float volume(float length, float width, float height) {
    return length * width * height;
  }
};
int main() {
  car package;
  package.length = 16.0;
  package.width = 9.0;
  package.height = 5.0;
  cout << package.volume(package.length, package.width,package.height) << endl;

}
