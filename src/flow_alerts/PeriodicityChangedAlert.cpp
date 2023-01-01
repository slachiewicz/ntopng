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

#include "flow_alerts_includes.h"

/* ***************************************************** */

ndpi_serializer* PeriodicityChangedAlert::getAlertJSON(ndpi_serializer* serializer) {
#ifdef NTOPNG_PRO
  Flow *f = getFlow();
#endif
  
  if(serializer == NULL)
    return NULL;

#ifdef NTOPNG_PRO
  ndpi_serialize_string_boolean(serializer, "is_periodic", f->getPeriodicity() == periodicity_status_is_periodic);
  ndpi_serialize_string_boolean(serializer, "is_aperiodic", f->getPeriodicity() == periodicity_status_is_aperiodic);
#endif

  return serializer;
}

/* ***************************************************** */
