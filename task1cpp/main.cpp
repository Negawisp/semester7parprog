#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

const int NUM_THREADS = 32;

int main() {
    omp_set_num_threads(NUM_THREADS);
    #pragma omp parallel
    {

        printf("Hello, World! I am a thread number %03d and there are %d of us!\n",
               omp_get_thread_num(), omp_get_num_threads());
    }
    return 0;
}
