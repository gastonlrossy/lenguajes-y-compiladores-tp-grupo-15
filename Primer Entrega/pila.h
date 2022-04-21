#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCCESS 1
#define NO_MEMORY 0

typedef struct sNodeS
{
    struct sNodeS* ant;
    char info[200];
    int number;
}tNodeS;

typedef tNodeS* tStack;


void createStack(tStack*p);
int pushStack(tStack*p,char*d);
int popStack(tStack* p,char* d);
int emptyStack(tStack* p);

void createStack(tStack* p)
{
    *p=NULL;
}

int pushStack(tStack* p,char* d)
{

    tNodeS* newNode=(tNodeS*)malloc(sizeof(tNodeS));

    if(!newNode)
        return NO_MEMORY;

    strcpy(newNode->info,d);

    newNode->ant=*p;
    *p=newNode;

    return SUCCESS;
}


int popStack(tStack* p,char* d)
{
    tNodeS* oldNode;
    if(!*p)
        return NO_MEMORY;
    oldNode=(tNodeS*)malloc(sizeof(tNodeS));
    oldNode=*p;
    strcpy(d,oldNode->info);
    *p=oldNode->ant;
    free(oldNode);
    return SUCCESS;
}


int emptyStack(tStack* p)
{
    return !*p;
}
