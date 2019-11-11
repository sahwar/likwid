/*
 * =======================================================================================
 *
 *      Filename:  allocator_types.h
 *
 *      Description:  Header File types of allocator Module.
 *
 *      Version:   5.0
 *      Released:  10.11.2019
 *
 *      Author:  Thomas Gruber (tr), thomas.roehl@googlemail.com
 *      Project:  none
 *
 *      Copyright (C) 2019 RRZE, University Erlangen-Nuremberg
 *
 *      This program is free software: you can redistribute it and/or modify it under
 *      the terms of the GNU General Public License as published by the Free Software
 *      Foundation, either version 3 of the License, or (at your option) any later
 *      version.
 *
 *      This program is distributed in the hope that it will be useful, but WITHOUT ANY
 *      WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 *      PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along with
 *      this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * =======================================================================================
 */

#ifndef ALLOCATOR_TYPES_H
#define ALLOCATOR_TYPES_H

#include <stdint.h>
#include <test_types.h>

typedef struct {
    void* ptr;
    size_t size;
    off_t offset;
    DataType type;
} allocation;

#endif
