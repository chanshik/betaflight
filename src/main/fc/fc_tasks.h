/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define LOOPTIME_SUSPEND_TIME 3  // Prevent too long busy wait times

void taskSystem(uint32_t currentTime);
void taskMainPidLoopCheck(uint32_t currentTime);
#ifdef USE_BST
void taskBstReadWrite(uint32_t currentTime);
void taskBstMasterProcess(uint32_t currentTime);
#endif

void fcTasksInit(void);
