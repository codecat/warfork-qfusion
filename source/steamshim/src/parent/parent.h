/*
Copyright (C) 2023 coolelectronics

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef STEAMSHIM_CHILD_H
#define STEAMSHIM_CHILD_H

#include <stdint.h>
#include "../steamshim.h"
#include "../steamshim_types.h"
#ifdef __cplusplus
extern "C" {
#endif

// pass runclient to connect to the steam app, runserver to host a game server
// return of 0 means failure
int STEAMSHIM_init(bool runclient, bool runserver);
void STEAMSHIM_deinit(void);
int STEAMSHIM_alive(void);
const STEAMSHIM_Event *STEAMSHIM_pump(void);
void STEAMSHIM_getSteamID();
void STEAMSHIM_getPersonaName();
void STEAMSHIM_setRichPresence(int num, const char** key, const char** val);
void STEAMSHIM_getAuthSessionTicket();
void STEAMSHIM_beginAuthSession(uint64_t steamid, SteamAuthTicket_t* ticket);
void STEAMSHIM_endAuthSession(uint64_t steamid);
void STEAMSHIM_createBeacon(uint32_t openSlots, char* connectString, char* metadata);
void STEAMSHIM_requestAvatar(uint64_t steamid, int size);
#ifdef __cplusplus
}
#endif

#endif

