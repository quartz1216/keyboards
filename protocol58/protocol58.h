#pragma once

#include "quantum.h"
#define XXX KC_NO

#define LAYOUT_12x5( \
    S00, S01, S02, S03, S04, S05, S06, S07, S08, S09,           \
    S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S1a, S1b, \
    S20, S21, S22, S23, S24, S25, S26, S27, S28, S29, S2a, S2b, \
    S30, S31, S32, S33, S34, S35, S36, S37, S38, S39, S3a, S3b, \
    S40, S41, S42, S43, S44, S45, S46, S47, S48, S49, S4a, S4b  \
) \
{ \
    {S00, S01, S02, S03, S04, S05, S06, S07, S08, S09, XXX, XXX}, \
    {S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S1a, S1b}, \
    {S20, S21, S22, S23, S24, S25, S26, S27, S28, S29, S2a, S2b}, \
    {S30, S31, S32, S33, S34, S35, S36, S37, S38, S39, S3a, S3b}, \
    {S40, S41, S42, S43, S44, S45, S46, S47, S48, S49, S4a, S4b}  \
}
