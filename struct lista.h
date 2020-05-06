# Practica-8
#ifndef DLIST_H
#define DLIST_H

#include "dnode.h"

typedef struct _dlist dlist;

struct _dlist{
    dnode *head;
    dnode *tail;
    int num;
};
