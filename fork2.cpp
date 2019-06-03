#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
using namespace std;
int main()
{
pid_t pid;
pid=fork();
if(pid!= 0)
{
cout<< "hey i m in parent process"<< getppid();
}
else if(pid==0)
{
cout<<"parent process==" << getppid()<< '\n';
cout<<"child process ==" << getpid()<<'\n';
}
else
{
cout<<"child process"<< getpid();
}
return 0;
}
