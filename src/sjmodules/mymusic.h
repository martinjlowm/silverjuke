/*******************************************************************************
 *
 *                                 Silverjuke
 *     Copyright (C) 2015 Björn Petersen Software Design and Development
 *                   Contact: r10s@b44t.com, http://b44t.com
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see http://www.gnu.org/licenses/ .
 *
 *******************************************************************************
 *
 * File:    mymusic.h
 * Authors: Björn Petersen
 * Purpose: "Music library" settings
 *
 ******************************************************************************/



#ifndef __SJ_MYMUSIC_H__
#define __SJ_MYMUSIC_H__



class SjMyMusicModule : public SjCommonModule
{
public:
	SjMyMusicModule     (SjInterfaceBase*);

	SjEmbedTo       EmbedTo             () { return SJ_EMBED_TO_MAIN; }
	wxWindow*       GetConfigPage       (wxWindow* parent, int selectedPage);
	void            DoneConfigPage      (wxWindow* p, int action);
};



#endif // __SJ_MYMUSIC_H__
