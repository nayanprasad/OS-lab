#include<stdio.h>
#include<unistd.h>

int main() {
  int fd[2];
  pipe(fd);

  int id = fork();

  if(id == 0) {

    int a;

    read(fd[0], &a, sizeof(int));

    printf("%d", a);

  } else{

    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    write(fd[1], &n, sizeof(int));
  }
}
