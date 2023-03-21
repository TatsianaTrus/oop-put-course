#include <iostream>

using namespace std;


class Flower {
 private:
 std::string color;
 public:
 Flower PaintedFlower(std::string newColor) {
 this->color = std::move(newColor);
 return *this;
 }
 std::string CurrentColor() {
 return this->color;
 };
 };
class Human {
 private:
 std::string name;
// std::optional<std::vector<Flower>> HumansFlowers;
 public:
 void NameHuman(std::string HumansNewName) {

 }
 void TakeFlower(const Flower &flower) {
 this->humansFlowers->push_back(flower);
 }
 Flower TakeFlower() {
 Flower takeFromHuman = this->HumansFlowers->back();
 this->HumansFlowers->pop_back();
 return takenFromHuman;
 }
 };
 int main() {
 Human flowerLover;
 flowerLover.NameHuman("Marks");
 Flower flower;
 Flower newFlower = flower.PaintedFlower("Violet");
 flowerLover.TakeFlower(newFlower);
 Flower wetFlower =flowerLover.TakeFlower();
 std::cout << wetFlower.CurrentColor();
 return 0;
 }
