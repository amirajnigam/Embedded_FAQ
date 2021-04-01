//Task: Find size of a data type without sizeof operator?

#include<stdio.h>

#define M1

#ifdef M1
int main(void)
{
    char *ptr = 0;   /*Declare a pointer*/
	int *p = 0;
	
    ptr++;
    p++;
	
	printf("Size of char = %d\n",ptr);
    printf("Size of int = %d\n",p);
	return 0;
}
#endif

#ifdef M2

int main(void)
{
    int a[2];
    char *p1, *p2; //Why only pointer to char?

    p1 = &a[0];
    p2 = &a[1];

    printf("Size of int:%d\n", p2-p1);
    
    return 0;
}
#endif