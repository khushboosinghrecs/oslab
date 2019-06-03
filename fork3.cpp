#include <iostream>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main()
{
pid_t pid;
pid =fork();
if(pid==-1)
{
cout<<"error"<<'\n';
}
else if(pid<0)
{
cout<< " this is child process and going to sleep for 5 sec"<<
sleep(5);
cout<< "child finished wait" << '\n';
}
else 
{
cout<< " this is parent process and sleep for 0 sec"<<'\n';
wait(0);
cout<<" parent finished wait"<<'\n';
}
return 0;
}
