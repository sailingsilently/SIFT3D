/* -----------------------------------------------------------------------------
 * mexutil.h
 * -----------------------------------------------------------------------------
 * Copyright (c) 2015 Blaine Rister et al., see LICENSE for details.
 * -----------------------------------------------------------------------------
 * Public header for SIFT3D mex utility library.
 * -----------------------------------------------------------------------------
 */

#include "mex.h"
#include "types.h"

#ifndef _MEXUTIL_H
#define _MEXUTIL_H

void err_msg(const char *name, const char *msg);

void err_msgu(const char *name, const char *msg);

int isDouble(const mxArray *const mx);

int mx2im(const mxArray *const mx, Image *const im);

mxArray *mat2mx(const Mat_rm *const mat);

int mx2mat(const mxArray *const mx, Mat_rm *const mat);

mxArray *kp2mx(const Keypoint_store *const);

int mx2kp(const mxArray *const mx, Keypoint_store *const);

mxArray *desc2mx(const SIFT3D_Descriptor_store *const desc);

int mex_SIFT3D_detect_keypoints(const Image *const im, 
        Keypoint_store *const kp);

int mex_SIFT3D_extract_descriptors(const Image *const im, 
        const Keypoint_store *const kp, SIFT3D_Descriptor_store *const desc, 
        const int useGpyr);

Pyramid *mexGetGpyr(void);

#endif