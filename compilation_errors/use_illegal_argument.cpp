/*
 * Trompeloeil C++ mocking framework
 *
 * Copyright Björn Fahller 2015,2016
 *
 *  Use, modification and distribution is subject to the
 *  Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt)
 *
 * Project home: https://github.com/rollbear/trompeloeil
 */

//illegal argument

#include "../trompeloeil.hpp"

struct MS
{
  MAKE_MOCK1(f, void(int));
};

void func(const int&);

int main()
{
  MS obj;
  REQUIRE_CALL(obj, f(ANY(int)))
    .SIDE_EFFECT(func(_2));
}
