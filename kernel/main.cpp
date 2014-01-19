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


#include "video.h"
int _main(void);

int _main(void) {
    Video vid;
    vid.clear();
    vid.write("Firmus OS 0.1 alpha");
    vid.write("Giacomo Picchiarelli <gpicchiarelli@gmail.com>");
    return 0;
}
