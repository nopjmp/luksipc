/*
	luksipc - Tool to convert block devices to LUKS in-place.
	Copyright (C) 2011-2015 Johannes Bauer

	This file is part of luksipc.

	luksipc is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; this program is ONLY licensed under
	version 3 of the License, later versions are explicitly excluded.

	luksipc is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with luksipc; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

	Johannes Bauer <JohannesBauer@gmx.de>
*/

#ifndef __LOGGING_H__
#define __LOGGING_H__

#define LLVL_DEBUG			4
#define LLVL_INFO			3
#define LLVL_WARN			2
#define LLVL_ERROR			1
#define LLVL_CRITICAL		0

/*************** AUTO GENERATED SECTION FOLLOWS ***************/
int getLogLevel(void);
void setLogLevel(int aLogLevel);
void logmsg(int aLogLvl, const char *aFmtString, ...);
/***************  AUTO GENERATED SECTION ENDS   ***************/

#endif
