//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//  Adaptation to Boost of the libcxx
//  Copyright 2010 Vicente J. Botet Escriba
//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

// Duration shall be an instance of duration.

#include <boost/chrono/chrono.hpp>

void test()
{
    typedef boost::chrono::time_point<boost::chrono::system_clock, int> T;
    T t;
}
