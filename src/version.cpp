/*
Minetest
Copyright (C) 2013 celeron55, Perttu Ahola <celeron55@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "version.h"
#include "config.h"

#ifdef USE_CMAKE_CONFIG_H

#include "cmake_config_githash.h"

const char *minetest_version_simple = CMAKE_VERSION_STRING;
const char *minetest_version_hash = CMAKE_VERSION_GITHASH;
const char *minetest_build_info =
		"VER=" CMAKE_VERSION_GITHASH " " CMAKE_BUILD_INFO;

#else

const char *minetest_version_simple = "unknown";
const char *minetest_version_hash = "unknown";
const char *minetest_build_info = "non-cmake";

#endif

