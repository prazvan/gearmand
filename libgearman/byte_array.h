/* Gearman server and library
 * Copyright (C) 2008 Brian Aker
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __GEARMAN_BYTE_ARRAY_H__
#define __GEARMAN_BYTE_ARRAY_H__

#ifdef __cplusplus
extern "C" {
#endif

struct gearman_byte_array_st {
  ssize_t length;
  uint8_t value[];
};


gearman_byte_array_st *gearman_byte_array_create(ssize_t initial_size);
char *gearman_byte_array_c_copy(gearman_byte_array_st *byte_array, ssize_t *length);
void gearman_byte_array_free(gearman_byte_array_st *ptr);
gearman_return gearman_byte_array_store(gearman_byte_array_st *byte_array,
                                  const char *value, ssize_t length);

#ifdef __cplusplus
}
#endif

#endif /* __GEARMAN_BYTE_ARRAY_H__ */
