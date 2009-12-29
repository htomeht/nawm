#include <stdio.h>
#include <stdlib.h>

#include <xcb/xcb.h>

#include "event.h"
#include "client.h"
#include "error.h"
#include "screen.h"
#include "view.h"

/**********************************************************
 * Holds the main loop of the window manager 
 * Dispatches eventhandling to the relevant functions.
 *********************************************************/
int main(int argc, char *argv[])
{
    int i, screen_nr;
    screen_t * screen_list;

    // Connect to X server
    xcb_connection_t *c = xcb_connect(NULL, &screen_nr);

    // Get connetion setup
    const xcb_setup_t *setup = xcb_get_setup(c);

    // Allocate the screen list.
    xcb_screen_iterator_t iter = xcb_setup_roots_iterator(setup);
    for (i = 0; i < screen_nr; ++i) {
        xcb_screen_next (&iter);  
        screen_list[i] = iter.data;
    }

    // Assign a view to each screen.
    // 1. Create a view
    // 2. Set curr_view to this

    // 1.1 Check the config for what view should be created
    // 1.2 Either create a default view or otherwise a custom one.

    // Do stuff


    run(c);   
    cleanup(c);
    return 0;
}

void run(xcb_connection_t *c)
{
    return;
}

void cleanup(xcb_connection_t *c)
{

    xcb_disconnect(c);

}
