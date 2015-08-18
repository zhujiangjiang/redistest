#include<iostream>
#include <hiredis/hiredis.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <hiredis/async.h>
#include "head.h"
#include <mysql.h>

using namespace std;


int main(int argc, char* argv[])
{
/*	
    signal(SIGPIPE, SIG_IGN);

    redisContext *c = redisConnect("127.0.0.1", 6379);
    if (c->err) {
        // Let *c leak for now... 
        printf("Error: %s\n", c->errstr);
        return 1;
    }
    else
    {
	printf("connect");	
    } 
	for(int i=0; i<1000;++i)
	{
		int uid = rand() + 100000;		
		int score = rand()%100;
		char command[50];
		sprintf(command,"zadd rank %d %d",score,uid);
		printf("%s\n",command);
		redisCommand(c,command);
		//printf("%d\n",result);
		//return 0;
	}
    return 0;	
*/
	one();
	two();
	three();
cout << "hello, world" << endl;
}
