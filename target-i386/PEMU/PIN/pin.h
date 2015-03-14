/*
#
#  Copyright © 2014 The University of Texas System Board of Regents, All Rights Reserved.
#       Author:        The Systems and Software Security (S3) Laboratory.
#         Date:        March 12, 2015
#      Version:        1.0.0
#
*/

#ifndef PIN_H
#define PIN_H

#include <xed-interface.h>



//////////////basic type////////////
#include "basic_types.h"
////////////////////////////////////

//////////////control///////////////
#include "controlling_and_initializing.h"
////////////////////////////////////

////////////////Inst////////////////
#include "reg32.h"
#include "generic_inspection_api.h"
#include "inst_instrumentation_api.h"
////////////////////////////////////

////////////////bbl/////////////////
#include "bbl.h"
//////////////trace/////////////////
#include "trace.h"
////////////////////////////////////

/////////////////args///////////////
#include "instrumentation_arguments.h"
////////////////////////////////////

/////////////////rtn////////////////

////////////////////////////////////

///////////////syscall//////////////
#include "systemcall_api.h"
////////////////////////////////////

///////////////contex///////////////
#include "context_manipulation_api.h"
////////////////////////////////////

///////////////thread///////////////
#include "thread_api.h"
////////////////////////////////////

///////////////thread///////////////
#include "../INTROSPECT/introspect.h"
////////////////////////////////////

//yang
////////////level//////////////////
#include"instrumentation_level.h"

#endif
