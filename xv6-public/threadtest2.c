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

//#include "types.h"
//#include "stat.h"
//#include "user.h"
//#include "kthread.h"
//void* printBLABLA()
//{
//	printf(1,"blabla.\n");
//	sleep(500);
//	exit();
//}
//int main(void)
//{
//	char stack1 [1024];
//	char stack2 [1024];
	/*int tid1,tid2;*/
//	kthread_create(&printBLABLA,stack1,1024);
//	kthread_create(&printBLABLA,stack2,1024);
	/*printf(1,"tid1 is: %d.\n",tid1);
	printf(1,"tid2 is: %d.\n",tid2);
	printf(1,"pid: %d.\n",getpid());*/
//	sleep(500);
//	exit();
//}
