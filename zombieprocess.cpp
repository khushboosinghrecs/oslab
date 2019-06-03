#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
using namespace std;
int main()
{
int i;
pid_t pid;
pid =fork();
if(pid==0)
{
for(i=0; i< 20; i++)
{
cout<<" i m child"<<getpid()<<endl;
}}
else
{
wait(NULL);
cout<<" parent process"<<getppid()<< endl;
}
return 0;
}
