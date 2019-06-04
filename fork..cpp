#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main()
{
pid_t pid;
pid= fork();
if( pid!=0)
{
cout<< "parent process"<< getpid();
}
else
{
cout <<"child process" << getpid();
}
return 0;
}
//new pgm 
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
int x=1;
if(fork()==0)
{
printf("child has x=%d\n", ++x);
}
else{
printf("poarent has x= %d\n", --x);
}
return 0;
}
// multiple fork
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
fork();
fork();
fork();
printf("hello khushi in hello2\n");
return 0;
}
