#include "gmock/gmock.h"
#include "example.h"
using namespace testing;
namespace foobar::test
{
    TEST(EsPar1, EsPar) //pide un nombre no estoy segura de si es eso
    {
        //assert(EsPar(2), true);
        ASSERT_THAT(EsPar(20), true);
    }
    TEST(EsMax, Maximo)
    {
        ASSERT_THAT(Maximo(10, 15), 15);
    }

}