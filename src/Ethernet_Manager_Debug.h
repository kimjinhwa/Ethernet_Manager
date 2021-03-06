/****************************************************************************************************************************
  Ethernet_Manager_Debug.h
  For W5x00 and ENC28J60 Ethernet shields.

  Ethernet_Manager is a library for nRF52, Teensy, STM32, SAM DUE and SAMD boards, with Ethernet W5x00 or ENC28J60 shields,
  to enable easy configuration/reconfiguration of Credentials and autoconnect/autoreconnect of Ethernet.
  AVR Mega is not supported.

  Built by Khoi Hoang https://github.com/khoih-prog/Ethernet_Manager
  Licensed under MIT license
  Version: 1.2.0

  Version  Modified By   Date      Comments
  -------  -----------  ---------- -----------
  1.0.0     K Hoang     14/12/2020 Initial coding.
  1.1.0     K Hoang     17/12/2020 Add support to ESP32/ESP8266. Add MQTT related examples to demo dynamic parameter usage
  1.1.1     K Hoang     28/12/2020 Suppress all possible compiler warnings
  1.2.0     K Hoang     22/02/2021 Optimize code and use better FlashStorage_SAMD and FlashStorage_STM32. 
                                   Add customs HTML header feature. Fix bug.
 *****************************************************************************************************************************/

#pragma once

#ifndef Ethernet_Manager_Debug_H
#define Ethernet_Manager_Debug_H

#ifdef ETHERNET_MANAGER_DEBUG_PORT
  #define ETM_DBG_PORT      ETHERNET_MANAGER_DEBUG_PORT
#else
  #define ETM_DBG_PORT      Serial
#endif

// Change _ETHERNET_MANAGER_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _ETHERNET_MANAGER_LOGLEVEL_
  #define _ETHERNET_MANAGER_LOGLEVEL_       0
#endif

const char ETM_MARK[] = "[ETM] ";
const char ETM_SP[]   = " ";

#define ETM_PRINT        ETM_DBG_PORT.print
#define ETM_PRINTLN      ETM_DBG_PORT.println

#define ETM_PRINT_MARK   ETM_PRINT(ETM_MARK)
#define ETM_PRINT_SP     ETM_PRINT(ETM_SP)

////////////////////////////////////////////////////

#define ETM_LOGERROR0(x)        if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT(x); }
#define ETM_LOGERROR(x)         if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT_MARK; ETM_PRINTLN(x); }
#define ETM_LOGERROR1(x,y)      if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINTLN(y); }
#define ETM_LOGERROR2(x,y,z)    if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINTLN(z); }
#define ETM_LOGERROR3(x,y,z,w)  if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINTLN(w); }
#define ETM_LOGERROR5(x,y,z,w,xx,yy) if(_ETHERNET_MANAGER_LOGLEVEL_>0) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINT(w); ETM_PRINT_SP; ETM_PRINT(xx); ETM_PRINT_SP; ETM_PRINTLN(yy); }

////////////////////////////////////////////////////

#define ETM_LOGWARN0(x)         if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT(x); }
#define ETM_LOGWARN(x)          if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT_MARK; ETM_PRINTLN(x); }
#define ETM_LOGWARN1(x,y)       if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINTLN(y); }
#define ETM_LOGWARN2(x,y,z)     if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINTLN(z); }
#define ETM_LOGWARN3(x,y,z,w)   if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINTLN(w); }
#define ETM_LOGWARN5(x,y,z,w,xx,yy) if(_ETHERNET_MANAGER_LOGLEVEL_>1) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINT(w); ETM_PRINT_SP; ETM_PRINT(xx); ETM_PRINT_SP; ETM_PRINTLN(yy); }

////////////////////////////////////////////////////

#define ETM_LOGINFO0(x)         if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT(x); }
#define ETM_LOGINFO(x)          if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT_MARK; ETM_PRINTLN(x); }
#define ETM_LOGINFO1(x,y)       if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINTLN(y); }
#define ETM_LOGINFO2(x,y,z)     if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINTLN(z); }
#define ETM_LOGINFO3(x,y,z,w)   if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINTLN(w); }
#define ETM_LOGINFO5(x,y,z,w,xx,yy) if(_ETHERNET_MANAGER_LOGLEVEL_>2) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINT(w); ETM_PRINT_SP; ETM_PRINT(xx); ETM_PRINT_SP; ETM_PRINTLN(yy); }

////////////////////////////////////////////////////

#define ETM_LOGDEBUG0(x)        if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT(x); }
#define ETM_LOGDEBUG(x)         if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT_MARK; ETM_PRINTLN(x); }
#define ETM_LOGDEBUG1(x,y)      if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINTLN(y); }
#define ETM_LOGDEBUG2(x,y,z)    if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINTLN(z); }
#define ETM_LOGDEBUG3(x,y,z,w)  if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINTLN(w); }
#define ETM_LOGDEBUG5(x,y,z,w,xx,yy) if(_ETHERNET_MANAGER_LOGLEVEL_>3) { ETM_PRINT_MARK; ETM_PRINT(x); ETM_PRINT_SP; ETM_PRINT(y); ETM_PRINT_SP; ETM_PRINT(z); ETM_PRINT_SP; ETM_PRINT(w); ETM_PRINT_SP; ETM_PRINT(xx); ETM_PRINT_SP; ETM_PRINTLN(yy); }

////////////////////////////////////////////////////

#endif    //Ethernet_Manager_Debug_H
