# Number of 1 Bits

## Solution 1

Use `((n >> i) & 1) == 1` to judge whether the i bits of n is 1 or not.

## Solution 2

Use `n = n & (n - 1)` to remove the last 1 bit of n.

## Solution 3

Steps:

1. Make 2 bits a group, count 1s in themeself.
2. Make 4 bits a group, count 1s in themeself.
3. Make 8 bits a group, count 1s in themeself.
4. Make 16 bits a group, count 1s in themeself.
5. Make 32 bits a group, count 1s in themeself.

## Solution 4

A data array storaged how many 1 bits 0-255 has, then split unsigned int into 4 unsigned char, get every unsinged char's 1 bits, then sum them.
