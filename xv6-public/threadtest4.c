#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
 char *buf = "Hello xv6!";
 int ret_val;
 ret_val = myfunction(buf);
 printf(1, "Return value : 0x%x\n", ret_val);
 exit();
}
/*
#include "types.h"
#include "stat.h"
#include "user.h"
#include "kthread.h"
 
void* printme() {
  printf(1,"Thread %d running !\n", kthread_id());
  kthread_exit();
  return 0;
}
#define MAX_STACK_SIZE 4096
int
main(int argc, char *argv[])
{
  uint *stack, *stack1, *stack2;
  int tid, tid1, tid2;
 
  stack = malloc(MAX_STACK_SIZE);
  memset(stack, 0, sizeof(*stack));
  if ((tid = (kthread_create(printme, stack, MAX_STACK_SIZE))) < 0) {
    printf(2, "thread_create error\n");
  }
  stack1  = malloc(MAX_STACK_SIZE);
  memset(stack1, 0, sizeof(*stack1));
  if ((tid1 = (kthread_create(printme, stack1, MAX_STACK_SIZE))) < 0) {
    printf(2, "thread_create error\n");
  }
  stack2  = malloc(MAX_STACK_SIZE);
  memset(stack2, 0, sizeof(*stack2));
  if ((tid2 = (kthread_create(printme, stack2, MAX_STACK_SIZE))) < 0) {
    printf(2, "thread_create error\n");
  }
  printf(1, "Joining %d\n", tid);
  if (kthread_join(tid) < 0) {
    printf(2, "join error\n");
  }
 
  printf(1, "Joining %d\n", tid1);
  if (kthread_join(tid1) < 0) {
    printf(2, "join error\n");
  }
 
 
  printf(1, "Joining %d\n", tid2);
  if (kthread_join(tid2) < 0) {
    printf(2, "join error\n");
  }
 
 
  printf(1, "\nAll threads done!\n");
 
  exit();
} */
