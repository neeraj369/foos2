#include<stdio.h>
void main()
{
int i;
i=fork();
if(i==0)
{
printf(" process child -%d ,parent - %d\n",getpid(),getppid());
}

}

