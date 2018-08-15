/*
 * Copyright (C) MAVLab
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/nav/nav_hybrid_heading.c"
 * @author MAVLab
 * Move heading into the wind when hybrids are hovering.
 */

#include "modules/nav/nav_hybrid_heading.h"
#include "navigation.h"


#define NAV_HYBRID_MAX_YAW_RATE   ANGLE_BFP_OF_REAL(90.0f/4.0f)   // deg/sec

void nav_hybrid_heading_init(void) {

}

void nav_hybrid_heading_periodic(void) {
  if ()

}


