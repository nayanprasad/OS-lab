#include <stdio.h>
#include <unistd.h>

int main() {

  int fd[2];
  pipe(fd);
  int pid = fork();

  if (pid == 0) {
    close(fd[0]);
    int num;
    printf("Enter a number that has to pass from child");
    scanf("%d", &num);
    write(fd[1], &num, sizeof num);
    close(fd[1]);
  } else {
    close(fd[1]);
    int num2;
    read(fd[0], &num2, sizeof num2);
    if (num2 % 2 == 0) {
      printf("number is even");
    } else {
      printf("number is odd");
    }
    close(fd[0]);
  }
}
