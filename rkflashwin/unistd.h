/*
DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
Version 2, December 2004

Copyright(C) 2017 Michele Tampellini <tampa1990@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.

DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

0. You just DO WHAT THE FUCK YOU WANT TO.
*/

#ifndef UNISTD_H
#define UNISTD_H

#include   <windows.h>
#include   <io.h>
#include   <errno.h>

//cheating define
#define ssize_t intptr_t
#define open _open
#define write _write
#define read _read
#define close _close
#define lseek _lseek
#define random rand
#define usleep(x) Sleep(x/1000)
#define PATH_MAX 256 //u sure mich?

#if defined(_UNICODE)
#define _T(x) L ##x
#else
#define _T(x) x
#endif

#endif