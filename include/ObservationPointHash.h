/*
 *
 * (C) 2013-23 - ntop.org
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef _OBSERVATION_POINT_HASH_H
#define _OBSERVATION_POINT_HASH_H

#include "ntop_includes.h"

class ObservationPointHash : public GenericHash {
 private:
  Mutex m;

 public:
  ObservationPointHash(NetworkInterface* iface, u_int _num_hashes,
                       u_int _max_hash_size);

  ObservationPoint* get(u_int16_t _obs_point, bool is_inline_call);
};

#endif /* _OBSERVATION_POINT_HASH_H */
