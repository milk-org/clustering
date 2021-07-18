/**
 * @file    clustering.c
 * @brief   cluster imates and data
 *
 *
 */



// module default short name
// all CLI calls to this module functions will be <shortname>.<funcname>
// if set to "", then calls use <funcname>
#define MODULE_SHORTNAME_DEFAULT "clustering"

// Module short description
#define MODULE_DESCRIPTION      "Cluster images and data"





#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <stdlib.h>


#include "CommandLineInterface/CLIcore.h"





/* ================================================================== */
/* ================================================================== */
/*            INITIALIZE LIBRARY                                      */
/* ================================================================== */
/* ================================================================== */

// Module initialization macro in CLIcore.h
// macro argument defines module name for bindings
//
INIT_MODULE_LIB(clustering)











static errno_t init_module_CLI()
{

    //CLIADDCMD_clustering__test();


    // add atexit functions here

    return RETURN_SUCCESS;
}




