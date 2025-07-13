- g++ -g foo.cpp

- sudo perf record -F 99 -g ./a.out

    -F: Frames per seconds
    
    -g: Record call graphs (stack traces)

- sudo perf report

- sudo perf script > out.perf

- FlameGraph/stackcollapse-perf.pl out.perf > out.folded

- FlameGraph/flamegraph.pl out.folded > flamegraph.svg