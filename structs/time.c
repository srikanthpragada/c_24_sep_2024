// Create a structure to store time
#include <string.h>

struct time
{
   int hours, mins, secs;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.hours, t.mins, t.secs);
}

int equals(struct time t1, struct time t2)
{

}

int total_seconds(struct time t)
{

}

void main()
{
    struct time t1 = {5, 20, 15};

    print(t1);

}
