#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
int main() {

    int fd[2];
    pipe(fd);
    
    int id = fork();
    
   if(id == 0) {
		int n=0;
		for(int i=n;i < n+4;i++){
				printf("%d ",i);
				fflush(stdout);
			}
   }else {
   		wait(0);
   		int n=5;
		for(int i=n;i < n+4;i++){
				printf("%d ",i);
				fflush(stdout);
			}
   }

}
