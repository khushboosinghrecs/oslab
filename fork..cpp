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
