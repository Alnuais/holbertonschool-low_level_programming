# Green Efficiency Analysis

## Measurement Methodology

This experiment examined the execution time of two C algorithms using a Holberton Linux sandbox. The program was compiled with GCC using the flags `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. It used the C `clock()` function to measure processor time for a naive nested-loop algorithm and a single-pass algorithm.

The compiled program was executed three times in the same environment. For each execution, the results and timing measurements were recorded. The arithmetic mean was calculated for both algorithms, followed by a relative runtime comparison. Earlier measurements collected on Windows were not combined with the Linux measurements because different environments can affect performance.

## Observed Performance Differences

The naive algorithm recorded execution times of 2.771310, 2.763113, and 2.752806 seconds. Its average was approximately 2.762410 seconds. The single-pass algorithm recorded 0.000107, 0.000106, and 0.000106 seconds, giving an average of approximately 0.000106333 seconds.

Based on these recorded values, the naive algorithm took approximately 25,979 times as long as the single-pass algorithm. The large difference is consistent with their structures: the naive implementation uses nested loops, while the single-pass implementation uses one loop.

However, their outputs were different. The naive algorithm returned 625025000, whereas the single-pass algorithm returned 25000. Therefore, the experiment demonstrates the runtime differences between these specific implementations, but it does not establish that they are interchangeable solutions to the same computational problem.

## Relation Between Runtime and Energy Consumption

Algorithm efficiency can influence energy consumption because processors require electrical power to perform computations. A program that requires fewer operations may finish sooner and potentially use less energy under comparable conditions.

The single-pass algorithm's much shorter measured runtime suggests that reducing unnecessary computation could be beneficial for energy efficiency. This is particularly relevant when software processes large datasets or performs repeated calculations.

Nevertheless, runtime and energy are not identical measurements. Energy consumption depends on both power and time. Processor utilization, clock frequency, hardware characteristics, memory activity, and system behavior can influence the actual amount of energy used. This experiment did not measure electrical power or energy directly, so no numerical energy savings can be claimed.

## Limitations of the Experiment

The experiment used one sandbox environment and only three executions. The measured timings could be influenced by background activity, compiler behavior, and the precision of `clock()`. The extremely short single-pass durations also make its relative timing sensitive to small measurement changes.

Another important limitation is that the two algorithms produce different outputs. Their runtime ratio should therefore not be interpreted as a fair speedup for identical functionality. Furthermore, the experiment did not measure CPU power, electricity consumption, or environmental impact. Additional repetitions, equivalent algorithm outputs, profiling tools, and energy-measurement equipment would improve the investigation.

## Practical Engineering Takeaway

The experiment highlights the importance of considering algorithm structure when developing software. Avoiding unnecessary nested loops can substantially reduce execution time for suitable problems.

For reliable engineering decisions, however, developers should first confirm that alternative algorithms produce the same required results. They should then benchmark them under controlled conditions and measure energy directly when energy efficiency is the objective.

The main lesson is that efficient code can support faster and potentially more energy-conscious software, but meaningful comparisons require correct functionality, reliable measurements, and careful interpretation.
