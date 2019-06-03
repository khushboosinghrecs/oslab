#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
using namespace std;
int main()
{
pid_t pid;
pid=fork();
if(pid>0)
{
cout<< "parent process"<<getpid();
}

else if(pid==0)
{
cout<<"i m child process"<< getpid()<<endl;
cout<<" parent id"<<getppid()<<endl;
sleep(5);
cout<< "child id"<< getpid()<<endl;
cout<< "parent id"<< getppid()<<endl;
exit(0);
}
else
{
cout<< "error";
}

return 0;
}
