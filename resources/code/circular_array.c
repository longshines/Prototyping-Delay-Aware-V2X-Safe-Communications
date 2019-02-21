#include "circular_array.h"

void initArray() {
    (void)memset(&circular_array, 0, sizeof(circular_array));
}

int isFull() {
    if(circular_array[MAXIMUM - 1].recvTime != 0 
    && circular_array[MAXIMUM - 1].sendTime != 0 
    && circular_array[MAXIMUM - 1].diff != 0) {
            return FULL;
    }

    else {
        return NOT_FULL;
    }
}

void putSendTime(long sendTime, int index) {
    int indexOfArray = index % MAXIMUM;

    circular_array[indexOfArray].sendTime = sendTime;
}

void putRecvTime(long recvTime, int index) {
    int indexOfArray = index % MAXIMUM;

    circular_array[indexOfArray].recvTime = recvTime;
}

void putDiff(long diff, int index) {
    int indexOfArray = index % MAXIMUM;

    circular_array[indexOfArray].diff = diff;
}

long getSendTime(int index) {
    int indexOfArray = index % MAXIMUM;

    return circular_array[indexOfArray].sendTime;
}

long getRecvTime(int index) {
    int indexOfArray = index % MAXIMUM;

    return circular_array[indexOfArray].recvTime;
}

long getDiff(int index) {
    int indexOfArray = index % MAXIMUM;

    return circular_array[indexOfArray].diff;
}

long getMessageLatency(int index) {
    int indexOfArray = index % MAXIMUM;

    return circular_array[indexOfArray].recvTime - circular_array[indexOfArray].sendTime;
}

long getNetworkLatency(int index) {
    int indexOfArray = index % MAXIMUM;

    return circular_array[indexOfArray].recvTime - circular_array[indexOfArray].sendTime - circular_array[indexOfArray].diff;
}

void printAllArray() {
    
}