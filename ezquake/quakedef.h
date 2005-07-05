/*
Copyright (C) 1996-1997 Id Software, Inc.

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
// quakedef.h -- primary header for client


//define	PARANOID			// speed sapping error checking

#ifndef  __QUAKEDEF_H_

#define	 __QUAKEDEF_H_

#define XML_STATIC

#include "common.h"

#include <expat.h>

#include "vid.h"
#include "draw.h"
#include "screen.h"
#include "render.h"
#include "console.h"
#include "cl_view.h"

#include "client.h"

#ifdef GLQUAKE
#include "gl_model.h"
#else
#include "r_model.h"
#endif

#include <pcre.h>
#include "teamplay.h"

#include "xsd.h"        // kazik
#include "Ctrl.h"       // kazik
#include "Ctrl_Tab.h"   // kazik
#include "Ctrl_PageViewer.h"    // kazik
#include "EX_FileList.h"        // kazik
#include "help.h"       // kazik
#include "hud.h"        // kazik

// HUD -> hexum
extern  int         host_screenupdatecount; // kazik, incremented every screen update, never reset

#endif //__QUAKEDEF_H_
