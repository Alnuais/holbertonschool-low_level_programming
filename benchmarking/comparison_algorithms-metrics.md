# Algorithmic Efficiency Comparison — Metrics

## Environment and Method
- Environment: Holberton Linux sandbox
- Compiler: GCC
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`
- Three executions of the same compiled program
- Timing method: C `clock()` function

## Results

| Run | Naive time (seconds) | Single-pass time (seconds) |
|---|---:|---:|
| 1 | 2.771310 | 0.000107 |
| 2 | 2.763113 | 0.000106 |
| 3 | 2.752806 | 0.000106 |
| Average | 2.762410 | 0.000106333 |

## Calculations

Naive average:
(2.771310 + 2.763113 + 2.752806) / 3 = 2.762410 seconds

Single-pass average:
(0.000107 + 0.000106 + 0.000106) / 3 = 0.000106333 seconds

Relative runtime:
2.762409667 / 0.000106333 = approximately 25,979 times

## Observations

- Naive algorithm result: 625025000
- Single-pass algorithm result: 25000
- The single-pass algorithm completed much faster.
- The algorithms produce different results, so they are not functionally equivalent.
- The measurements describe runtime, not direct energy consumption.
- Previous Windows measurements were excluded from the Linux averages because they came from a different environment.
