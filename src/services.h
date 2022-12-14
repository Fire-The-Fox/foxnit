/*
Foxnit - Wrapper for runit init system
Copyright (C) 2022 Ján Gajdoš 

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef HELPER_H
#define HELPER_H

typedef struct {
    char *name;
    short running;
} RunitService;

RunitService* list_services();
void register_service(char *name);
void unregister_service(char *name);
void start_service(char *name);
void stop_service(char *name);
void restart_service(char *name);
void status_service(char *name);

#endif