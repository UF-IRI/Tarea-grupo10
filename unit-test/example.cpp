#include "gmock/gmock.h"
#include "example.h"
using namespace testing;
namespace foobar::test
{
    TEST(EsPar, EsPar) 
    {
        ASSERT_THAT(EsPar(20), true);
    }
    TEST(EsPar1, EsPar)
    {
        ASSERT_THAT(EsPar(17), false);
    }
    TEST(EsPar2, EsPar)
    {
        ASSERT_THAT(EsPar(1), false);
    }
    TEST(EsMax, Maximo)
    {
        ASSERT_THAT(Maximo(10, 15), 15);
    }
    TEST(EsMax1, Maximo)
    {
        ASSERT_THAT(Maximo(22, 1), 22);
    }
    TEST(EsMax2, Maximo)
    {
        ASSERT_THAT(Maximo(75, 15), 15);// CASO QUE LARGA ERROR
    }

}