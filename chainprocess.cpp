#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
using namespace std;
int main()
{
for(int i=0; i<5; i++)
{
if(fork()==0)
{
cout<< "child id" << getpid()<< endl;
sleep(2);
cout<<" parent id" << getppid() << endl;
exit(0);
}
}
for(int i=0; i<5; i++)
wait(NULL);
return 0;
}
