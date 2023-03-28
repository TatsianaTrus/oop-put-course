# include <iostream>
using namespace std;

class AB
{   private:
    int a;
    int b;
    public:
    AB(int a, int b)
    {  this-> a = a;
       this-> b = b;
        cout << "The work of the constructor when creating a new object: " << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
       // std::cout << sum( a , b);
    }
    AB(){
    this->a=0;
    this->b=0;

    }
    AB(float a, float b):AB(static_cast<int>(a), static_cast<int>(b)){
    }
};
int main()
{ AB ob1();
 AB ob2 (2,5);
 AB ob3 (1.2f, 3.6f);

return 0;
}
