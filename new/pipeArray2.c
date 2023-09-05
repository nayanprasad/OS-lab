#include<stdio.h>
#include<unistd.h>

int main() {
  int fd[2], fd2[2], testfd[2];
  pipe(fd);
  pipe(fd2);
  pipe(testfd);
  int id = fork();

  if(id == 0) {

    close(fd[1]);
    close(fd2[0]);
    close(testfd[1]);

    int n;
    
    read(fd[0], &n, sizeof(int));

    int arr[n];

    read(fd[0], arr, n * sizeof(int));

    printf("\nChild ->");
    for(int i = 0; i < n; i++) {
      printf("%d", arr[i]);
    }

    for(int i = 0; i < n; i++) {
      arr[i] *= 2;
    }

    write(fd2[1], arr, n * sizeof(int));

    int test;
    read(testfd[0], &test, sizeof(int));
    printf("\n%d", test);

  } else {

    close(fd[0]);
    close(fd2[1]);
    close(testfd[0]);


    printf("Enter the size : ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    write(fd[1], &n, sizeof(int));
    write(fd[1], arr, n * sizeof(int));
    
    int modiArr[n];
    read(fd2[0], modiArr, n * sizeof(int));

    printf("\nParent -> ");
    for(int i = 0; i < n; i++) {
      printf("%d", modiArr[i]);
    }

    // int test = 10;
    // write(fd2[1], &test, sizeof(int));  // this wont work

    int test = 10;
    write(testfd[1], &test, sizeof(int));  


  }


}