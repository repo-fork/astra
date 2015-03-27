#ifndef SENSEKITUL_INTERNAL_H
#define SENSEKITUL_INTERNAL_H

#include <streams/depth_types.h>
#include <streams/color_types.h>

// https://gcc.gnu.org/onlinedocs/gcc/Zero-Length.html

typedef struct _sensekit_depthframe_wrapper {
    sensekit_depthframe_t frame;
    char frame_data[];
} sensekit_depthframe_wrapper_t;

typedef struct _sensekit_colorframe_wrapper {
    sensekit_colorframe_t frame;
    char frame_data[];
} sensekit_colorframe_wrapper_t;

#endif /* SENSEKITUL_INTERNAL_H */