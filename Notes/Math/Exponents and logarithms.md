#### (Over complicated solution for codeforces problem 791A...)

Based on the question, when they have the same weight, we can get this exponential equation:

a · 3<sup>n</sup> = b · 2<sup>n</sup>

We can take natural log of both sides of the equation and get:

log<sub>e</sub> (a · 3<sup>n</sup>) = log<sub>e</sub> (b · 2<sup>n</sup>)

Using the logarithmic product identity on both sides, we get:

log<sub>e</sub> a + log<sub>e</sub> 3<sup>n</sup> = log<sub>e</sub> b + log<sub>e</sub> 2<sup>n</sup>

Rearanging the equation, we get:

log<sub>e</sub> 3<sup>n</sup> - log<sub>e</sub> 2<sup>n</sup> = log<sub>e</sub> b - log<sub>e</sub> a

Using the logarithmic power identity on the left hand side, we get:

n · log<sub>e</sub> 3 - n · log<sub>e</sub> 2 = log<sub>e</sub> b - n · log<sub>e</sub> a

Further simplified:

n = ( log<sub>e</sub> b - log<sub>e</sub> a ) / ( log<sub>e</sub> 3 - log<sub>e</sub> 2)

Using the logarithmic quotient identity, we get:

n = [ log<sub>e</sub> (b / a) ] / [ log<sub>e</sub> (3 / 2) ]
