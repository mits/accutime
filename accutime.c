/*
 * accutime.c
 *
 *  Created on: Mar 24, 2010
 *      Author: mits
 */

#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	struct timeval tev;
	struct timezone tz;
	struct tm *tcomp;
	gettimeofday(&tev, &tz);
	tcomp = localtime(&tev.tv_sec);
	printf("%d:%d:%d.%ld\n", tcomp->tm_hour, tcomp->tm_min, tcomp->tm_sec, tev.tv_usec);

	return 0;
}
