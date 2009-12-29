#define MAX_VIEWS 32 // Its hard to know how big this should be
#define MAX_TAGS 32 // Its hard to know how big this should be

typedef viewmode enum {CASCADING, FULLSCREEN};

typedef struct {
    viewmode mode;
    tag_t *tags[MAX_TAGS];
    
} view_t;
