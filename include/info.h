/*  This file is part of Sharkive
>	Copyright (C) 2018 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#ifndef INFO_H
#define INFO_H

#include "common.h"

typedef enum {
	TYPE_INFO,
	TYPE_ERROR
} Info_t;

class Info
{
public:
	void init(std::string title, std::string message, int ttl, Info_t type);
	void init(Result res, std::string message, int ttl, Info_t type);
	void resetTTL(void);
	void draw(void);

private:
	std::string title;
	std::string message;
	size_t width;
	size_t height;
	int x;
	int y;
	int ttl;
	Result res;
	Info_t type;
};

#endif
