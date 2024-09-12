#include<iostream>
#include<unistd.h>

int main()
{
	pid_t child_pid;
	child_pid = fork();

	if(child_pid == -1)
	{
		std::cerr<<"Fork Failed"<<std::endl;
		return 1;
	}

	for(int i=1; i<=5;i++)
	{
		if(child_pid == 0)
		{
			std::cout<<"Child Count"<<i<<std::endl;
		}
		else 
		{
			std::cout<<"Parent Count"<<i<<std::endl;
		}
		sleep(1);
	}
	return 0;
}
