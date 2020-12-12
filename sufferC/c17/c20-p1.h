#ifndef _C20__P1_H_
#define _C20__P1_H_

#include <stdio.h>
#include <string.h>

typedef struct{
	char name[256];
	int age;
	int sex;
}personal;

extern void indata(personal *data);
extern void printfdata(personal data);

#endif