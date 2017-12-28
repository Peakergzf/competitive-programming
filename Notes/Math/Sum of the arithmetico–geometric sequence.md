#### (Over complicated solution for codeforces problem 486A)

Given a function f(n) = - 1 + 2 - 3 + ... +(-1)<sup>n</sup>n, we are asked to calculate f(n) for a given positive integer n.

It is mathematically equivalent to the sum of the Arithmetico–geometric sequence:

Sn = (-1)<sup>1</sup> × 1 + (-1)<sup>2</sup> × 2 + (-1)<sup>3</sup> × 3 + ... + (-1)<sup>n</sup> · n     `----- (1)`

Multiplying both sides by -1 gives:

(-1) · Sn = (-1)<sup>2</sup> × 1 + (-1)<sup>3</sup> × 2 + ... + (-1)<sup>n</sup> · (n - 1) + (-1)<sup>(n + 1)</sup> · n      `----- (2)`

Subtracting `(2)` from `(1)` then gives:

(1 + 1) · Sn = [(-1)<sup>1</sup> × 1 + (-1)<sup>2</sup> × 1 + (-1)<sup>3</sup> × 1 + ... + (-1)<sup>n</sup> · (n - 1)] - (-1)<sup>(n + 1)</sup> · n     `----- (3)`

Among this, [(-1)<sup>1</sup> × 1 + (-1)<sup>2</sup> × 1 + (-1)<sup>3</sup> × 1 + ... + (-1)<sup>n</sup> · (n - 1)] is the sum of geometric sequence, with a<sub>1</sub> = -1, q = -1, which is:

(-1) · [1 - (-1)<sup>n</sup>] / [1-(-1)]     `----- (4)`

Subtituting `(4)` into `(3)` gives:

(1 + 1) · Sn = (-1) · [1 - (-1)<sup>n</sup>] / [1-(-1)] - (-1)<sup>(n + 1)</sup> · n

Simplified:

Sn = [(-1)<sup>n</sup> - 1] / 4 - (-1)<sup>(n + 1)</sup> · n / 2

which is the value of f(n) in this question.
