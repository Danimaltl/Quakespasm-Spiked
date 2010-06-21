/*
Copyright (C) 1996-2001 Id Software, Inc.
Copyright (C) 2002-2009 John Fitzgibbons and others

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef __NET_WINSOCK_H
#define __NET_WINSOCK_H

// net_wins.h

sys_socket_t  WINS_Init (void);
void WINS_Shutdown (void);
void WINS_Listen (qboolean state);
sys_socket_t  WINS_OpenSocket (int port);
int  WINS_CloseSocket (sys_socket_t socketid);
int  WINS_Connect (sys_socket_t socketid, struct qsockaddr *addr);
sys_socket_t  WINS_CheckNewConnections (void);
int  WINS_Read (sys_socket_t socketid, byte *buf, int len, struct qsockaddr *addr);
int  WINS_Write (sys_socket_t socketid, byte *buf, int len, struct qsockaddr *addr);
int  WINS_Broadcast (sys_socket_t socketid, byte *buf, int len);
char *WINS_AddrToString (struct qsockaddr *addr);
int  WINS_StringToAddr (char *string, struct qsockaddr *addr);
int  WINS_GetSocketAddr (sys_socket_t socketid, struct qsockaddr *addr);
int  WINS_GetNameFromAddr (struct qsockaddr *addr, char *name);
int  WINS_GetAddrFromName (char *name, struct qsockaddr *addr);
int  WINS_AddrCompare (struct qsockaddr *addr1, struct qsockaddr *addr2);
int  WINS_GetSocketPort (struct qsockaddr *addr);
int  WINS_SetSocketPort (struct qsockaddr *addr, int port);

#endif	/* __NET_WINSOCK_H */

