#include "rice/Data_Type.hpp"
#include "rice/Constructor.hpp"

using namespace Rice;

class Test
{
  public:
    Test() {}
    std::string sayHello()
    {
        return std::string("Hello, World!");
    }
};

extern "C"
void Init_Test()
{
  Data_Type<Test> rb_cTest = 
    define_class<Test>("Test")
    .define_constructor(Constructor<Test>())
    .define_method("hello", &Test::sayHello);
}