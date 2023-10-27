/*

Copyright (c) 1997-1999  Microsoft Corporation

Module Name:
    sdperr.h

Abstract:
    sdp error codes

Author:

*/

#ifndef __SDP_ERROR_CODES__
#pragma option push -b -a8 -pc -A- /*P_O_Push*/
#define __SDP_ERROR_CODES__





// First four bits - SEVERITY(11), CUSTOMER FLAG(1), RESERVED(0)
#define SDP_INVALID_FORMAT                  0xe0000400

#define SDP_INVALID_CHARACTER_SET_FORMAT    (SDP_INVALID_FORMAT + 1)

#define SDP_INVALID_CHARACTER_SET           (SDP_INVALID_FORMAT + 2)

#define SDP_INVALID_NUMERICAL_VALUE         (SDP_INVALID_FORMAT + 3)

#define SDP_INVALID_VERSION_FIELD           (SDP_INVALID_FORMAT + 4)

#define SDP_INVALID_ORIGIN_FIELD            (SDP_INVALID_FORMAT + 5)

#define SDP_INVALID_SESSION_NAME            (SDP_INVALID_FORMAT + 6)

#define SDP_INVALID_SESSION_TITLE           (SDP_INVALID_FORMAT + 7)

#define SDP_INVALID_URI                     (SDP_INVALID_FORMAT + 8)

#define SDP_INVALID_EMAIL_FIELD             (SDP_INVALID_FORMAT + 9)

#define SDP_INVALID_PHONE_FIELD             (SDP_INVALID_FORMAT + 10)

#define SDP_INVALID_CONNECTION_FIELD        (SDP_INVALID_FORMAT + 11)

#define SDP_INVALID_BANDWIDTH_FIELD         (SDP_INVALID_FORMAT + 12)

#define SDP_INVALID_ADDRESS                 (SDP_INVALID_FORMAT + 13)

#define SDP_INVALID_TIME_PERIOD             (SDP_INVALID_FORMAT + 14)

#define SDP_INVALID_TIME_FIELD              (SDP_INVALID_FORMAT + 15)

#define SDP_INVALID_REPEAT_FIELD            (SDP_INVALID_FORMAT + 16)

#define SDP_INVALID_ADJUSTMENT_FIELD        (SDP_INVALID_FORMAT + 17)

#define SDP_INVALID_ENCRYPTION_KEY_FIELD    (SDP_INVALID_FORMAT + 18)

#define SDP_INVALID_ATTRIBUTE               (SDP_INVALID_FORMAT + 19)

#define SDP_INVALID_MEDIA_FIELD             (SDP_INVALID_FORMAT + 20)

#define SDP_INVALID_MEDIA_NAME              (SDP_INVALID_FORMAT + 21)

#define SDP_INVALID_MEDIA_TITLE             (SDP_INVALID_FORMAT + 22)

#define SDP_INTERNAL_ERROR                  (SDP_INVALID_FORMAT + 23)

#define UNABLE_TO_FREE_BSTR                 (SDP_INVALID_FORMAT + 24)

#define SDP_ALREADY_PARSED                  (SDP_INVALID_FORMAT + 25)

#define SDP_INVALID_PARAMETER               (SDP_INVALID_FORMAT + 26)

#define SDP_INVALID_VALUE                   (SDP_INVALID_FORMAT + 27)

#define SDP_OUTPUT_ERROR                    (SDP_INVALID_FORMAT + 28)


#pragma option pop /*P_O_Pop*/
#endif // __SDP_ERROR_CODES__