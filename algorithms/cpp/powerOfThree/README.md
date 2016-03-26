# Power of Three

## Solution 1

Violence way.

## Solution 2

In C++, INT\_MAX is 2147483647.

> 3\*\*5 means pow(3,5).

3\*\*19 < 2147483647 < 3\*\*20

So if x is pow of 3, `3**19 % x == 0`. (This just work with prime number.)

# Reference

* [LeetCode：Power of Three - 数字三的幂](http://my.oschina.net/Tsybius2014/blog/601048)
