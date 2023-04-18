#include <iostream>
#include <map>

class Cantor {
 public:
  Cantor() = default;
  virtual ~Cantor() = default;

  virtual double Rate(const std::string& abbreviation) const = 0;
};

class FakeUsdCantor : public Cantor {
 public:
  FakeUsdCantor() {
    // rates_ map with values for ten most popular currencies relative to USD
    rates_ = {
      {"EUR", 0.85},
      {"JPY", 110.66},
      {"GBP", 0.73},
      {"CHF", 0.91},
      {"CAD", 1.25},
      {"AUD", 1.34},
      {"CNY", 6.47},
      {"HKD", 7.78},
      {"NZD", 1.44},
      {"KRW", 1153.89}
    };
  }

  double Rate(const std::string& abbreviation) const override {
    auto it = rates_.find(abbreviation);
    if (it != rates_.end()) {
      return it->second;
    }
    // Handle error case when currency abbreviation is not found
    return 0.0;
  }

 private:
  std::map<std::string, double> rates_;
};

class Currency {
 public:
  Currency() = default;
  virtual ~Currency() = default;

  virtual double ConvertedToDollars(const Cantor& cantor) const = 0;
  virtual std::string Abbreviation() const = 0;
  virtual double Amount() const = 0;

};
class EUR:public Currency {
private:
std::string abbreviation_;
double amount_;
 public:
 EUR (std::string abbreviation,double amount ):abbreviation_(abbreviation), amount_(amount) {}
 //virtual double Abbreviation()=0;
 //virtual double Amount()=0;
 std::string Abbreviation() const override {
        return abbreviation_;
    }
   double ConvertedToDollars(const Cantor& cantor) const override
   {
    double eur=cantor.Rate(abbreviation_);
    return amount_/eur;
   }
   double Amount()const override {
        return amount_;
    }
  //  private:
     //std::string Abbreviation;
    // std::double Amount;
};
int main()
{
  FakeUsdCantor money;
    EUR Currency1("EUR",657);
    std::cout << "Original amount:" << Currency1.Amount() << " " << Currency1.Abbreviation() << std::endl;
    std::cout << "Converted to USD:" << Currency1.ConvertedToDollars(money) << " USD" << std::endl;

    return 0;
  return 0;
}

