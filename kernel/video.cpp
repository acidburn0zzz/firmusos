/*
This file is part of FirmusOS.

FirmusOS is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

FirmusOS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with FirmusOS.  If not, see <http://www.gnu.org/licenses/>.

    Giacomo Picchiarelli <gpicchiarelli@gmail.com>
*/

#include "Video.h"

Video::Video() {
    pos = 0;
    off = 0;
    videomem = (unsigned short*)0xb8000;
}

Video::~Video() {}

void Video::clear() {
    unsigned int i;
    for(i=0; i<(80*25); i++) {
        videomem[i] = (unsigned short)' '|0x0700;
    }
    pos = 0;
    off = 0;
}

void Video::write(char *cp) {
    char *str = cp, *ch;
    for(ch=str; *ch; ch++) {
        put(*ch);
    }
}

void Video::put(char c) {
    if(pos>=80) {
        pos = 0;
        off+=80;
    }
    if(off>=(80*25)) {
        clear();
    }

    videomem[off+pos] = (unsigned short)c|0x0700;
    pos++;
}
#include "Video.h"

Video::Video() {
    pos = 0;
    off = 0;
    videomem = (unsigned short*)0xb8000;
}

Video::~Video() {}

void Video::clear() {
    unsigned int i;
    for(i=0; i<(80*25); i++) {
        videomem[i] = (unsigned short)' '|0x0700;
    }
    pos = 0;
    off = 0;
}

void Video::write(char *cp) {
    char *str = cp, *ch;
    for(ch=str; *ch; ch++) {
        put(*ch);
    }
}

void Video::put(char c) {
    if(pos>=80) {
        pos = 0;
        off+=80;
    }
    if(off>=(80*25)) {
        clear();
    }
    videomem[off+pos] = (unsigned short)c|0x0700;
    pos++;
}

