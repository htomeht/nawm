#define MAX_VIEWS 32 // Its hard to know how big this should be

typedef struct {
    view_t * list[MAX_VIEWS]; 
    view_t * current;
} views_t;

typedef struct {
    
} view_t;
