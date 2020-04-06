
#ifndef VER_ENUM
#define VER_ENUM

#include "build.h"

// WHEN CHANGING VERSION PLEASE EDIT Post-build.bat 
// parameter --exe-version 2.0.0.0 to match new version numbers
#ifdef AIRGAS
enum {
   VER_MAJOR = 1,	//1 for US, 2 for EU
   VER_MINOR = 2,
   VER_PATCH = 1,   
   
   VENDOR_ID = 1,
   APP_ID = 10,
};
#define PROTOCOL_VER		PROTO_VER_CAM_US
#else
enum {
   VER_MAJOR = 2,	//1 for US, 2 for EU
   VER_MINOR = 2,
   VER_PATCH = 1,   
   
   VENDOR_ID = 1,
   APP_ID = 10,
};
#define PROTOCOL_VER		PROTO_VER_CAM_EU
#endif
#endif

