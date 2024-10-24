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
    return total_seconds(t1) == total_seconds(t2);
}

int compare(struct time t1, struct time t2)
{
    return  total_seconds(t1) - total_seconds(t2);
}

int total_seconds(struct time t)
{
    return t.hours * 3600 + t.mins * 60 + t.secs;
}

struct time max(struct time t1, struct time t2)
{
     if (total_seconds(t1) > total_seconds(t2))
         return t1;
     else
         return t2;
}

void main()
{
    struct time t1 = {5, 20, 15};

    print(t1);

}
