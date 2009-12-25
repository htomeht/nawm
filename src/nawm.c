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
    //connect to X server
    xcb_connection_t *c = xcb_connect(NULL, NULL);

    //Do stuff


    run();   
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
