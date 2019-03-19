/*  =========================================================================
    daxproto_classes - private header file

    LGPL3, boilerplate to come.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef DAXPROTO_CLASSES_H_INCLUDED
#define DAXPROTO_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/daxproto.h"

//  Extra headers

//  Opaque class structures to allow forward references

//  Internal API


//  *** To avoid double-definitions, only define if building without draft ***
#ifndef DAXPROTO_BUILD_DRAFT_API

//  Self test for private classes
DAXPROTO_PRIVATE void
    daxproto_private_selftest (bool verbose, const char *subtest);

#endif // DAXPROTO_BUILD_DRAFT_API

#endif
