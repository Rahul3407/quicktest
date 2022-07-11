#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
int main(int argc,char* argv[])
{
  int i, status;
  pid_t pid;

  pid = fork();
  if (pid == 0)
    {
      for(i=1;i<argc;i++)
        if(i %2 == 0)
          cout<<"even \n"<<argv[i]<<endl;
    }
  else
    {
      if (pid > 0)
        wait(&status);
      for(i=1;i<argc;i++)
        if(i %2 != 0)
          cout<<"odd \n"<<argv[i]<<endl;
    }

    wait(&status);
    if ( (status & 0xff) !=0 )
    {
        int exitstat;       
        exitstat = (int) status;
        cout<<"Exit status of the child was "<<exitstat <<" EXIT_SUCcESS"<<endl;
    }
    else
    {
        
      cout<<"Exit status of the child was SUCCESS"<<endl;  
    }
                                     
    
  return 0;
}