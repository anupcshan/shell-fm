/*
	vim:syntax=c tabstop=2 shiftwidth=2 noexpandtab
*/

#ifndef SHELLFM_SCKIF
#define SHELLFM_SCKIF

#include <stdio.h>

extern int tcpsock(const char *, unsigned short);
extern int unixsock(const char *);

extern void rmsckif(void);

extern void sckif(int, int);

extern int execcmd(const char *, char *);

FILE * get_fd(int);
void remove_fd(int);
extern void cleanup_fds();

extern void accept_client(int);
extern void handle_client(int);

#endif
