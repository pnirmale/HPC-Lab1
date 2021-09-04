#include <stdio.h>
#include <omp.h>
int main(void){
	static int cnt=0;
    #pragma omp parallel 
    {
        printf("Hello World! from prathamesh Nirmale 2018BTECS00059 :%d\n",cnt++);
    }
    #pragma omp parallel 
    {
        printf("Walchand College of Engineering Sangli:%d \n",cnt++);
    }
    #pragma omp parallel 
    {
        printf("Hello World!:%d\n",omp_get_thread_num());
    }

    return 0;
}