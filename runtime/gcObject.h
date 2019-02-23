#include <stdbool.h>

#pragma once
typedef struct GcObject GcObject;

// marked: still live
// atomicGroupId: part of an atomic allocation, should not be collected yet
#define GcHeader uint64_t size; int type; bool marked: 1; bool protect: 1

// common head of all Gc allocated structs
typedef struct GcObject {
    GcHeader;
} GcObject;
