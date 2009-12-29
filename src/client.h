// Clients are pretty much a window that the window manager should handle. 
// They should be simplistic and pretty much just provide an interface.

#include "tags.h" // If tags.h only defines the tag_t týpe we can safely pull it into this file.

#define MAX_NAME_LEN = 32
#define MAX_TAGS = 8

typedef struct Client {
    int id; // The unique id assigned to the Client on creation.
    char * name[MAX_NAME_LEN]; // Its hard to know how big this should be
    uint8_t name_len = MAX_NAME_LEN;
    tag_t * tag_list[MAX_TAGS]; // Do we really need this? 
    unsigned short x, y, width, height;
} client_t;

client_t spawn_client(char *name);
void kill_client(client_t *c);
void tag_client(client_t *c, tag_t * t);
void untag_client(client_t *c, tag_t * t);
