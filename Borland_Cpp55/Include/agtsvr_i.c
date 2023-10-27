/**************************************************************************
*                                                                         *
* AgtSvr_i.c - Interface IID and CLSID definitions for Microsoft Agent    *
*              Server.                                                    *
*                                                                         *
* Copyright (c) 1996-1998, Microsoft Corp. All rights reserved.           *
*                                                                         *
**************************************************************************/

/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Sep 15 16:56:07 1998
 */
/* Compiler settings for AgentServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAgentUserInput = {0xA7B93C80,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommand = {0xA7B93C83,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommandEx = {0xB0913412,0x3B44,0x11d1,{0xAC,0xBA,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommands = {0xA7B93C85,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommandsEx = {0x6BA90C00,0x3910,0x11d1,{0xAC,0xB3,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommandWindow = {0x6D0ECB23,0x9968,0x11D0,{0xAC,0x6E,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentSpeechInputProperties = {0xA7B93C87,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentAudioOutputProperties = {0xA7B93C89,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentAudioOutputPropertiesEx = {0xA7B93CA0,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentPropertySheet = {0xA7B93C8B,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentBalloon = {0xA7B93C8D,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentBalloonEx = {0xD7A6D440,0x8872,0x11d1,{0x9E,0xC6,0x00,0xC0,0x4F,0xD7,0x08,0x1F}};


const IID IID_IAgentCharacter = {0xA7B93C8F,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCharacterEx = {0x98BBE491,0x2EED,0x11d1,{0xAC,0xAC,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgent = {0xA7B93C91,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentEx = {0x48D12BA0,0x5B77,0x11d1,{0x9E,0xC1,0x00,0xC0,0x4F,0xD7,0x08,0x1F}};


const IID IID_IAgentNotifySink = {0x00D18159,0x8466,0x11D0,{0xAC,0x63,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentNotifySinkEx = {0x08C75162,0x3C9C,0x11d1,{0x91,0xFE,0x00,0xC0,0x4F,0xD7,0x01,0xA5}};


const IID IID_IAgentPrivateNotifySink = {0xB741B760,0x8EA6,0x11d0,{0xAC,0x6A,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCustomMarshalMaker = {0x408D7542,0xC8FC,0x11d1,{0xAA,0x83,0x00,0xC0,0x4F,0xA3,0x4D,0x72}};


const IID IID_IAgentClientStatus = {0xC5649F70,0x7AED,0x11d1,{0xB9,0xA8,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID LIBID_AgentServerObjects = {0xA7B93C73,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const CLSID CLSID_AgentServer = {0xD45FD2FC,0x5C6E,0x11D1,{0x9E,0xC1,0x00,0xC0,0x4F,0xD7,0x08,0x1F}};


#ifdef __cplusplus
}
#endif

