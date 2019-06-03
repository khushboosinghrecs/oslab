#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
using namespace std;
int main()
{
pid_t pid;
pid =fork();
if(pid==0)
{
execl("/bin/ls", "bin/ls", "-l", 0);
exit(0);
}
else if(pid==-1)
{
cout<<"unable "<<endl;
}
else
{
wait(0);
}
return 0;
}
