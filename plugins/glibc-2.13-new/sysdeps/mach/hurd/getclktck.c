/* Return run-time value of CLK_TCK for Hurd.
   Copyright (C) 1999, 2000, 2001 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <time.h>

/* Return frequency of `times'.
   Since Mach reports CPU times in microseconds, we always use 1 million.  */
int
__getclktck ()
{
  return 1000000;
}

/* Before glibc 2.2, the Hurd actually did this differently, so we
   need to keep a compatibility symbol.  */

#include <shlib-compat.h>

#if SHLIB_COMPAT (libc, PEMU_LIBC_2_1_1, PEMU_LIBC_2_2)
compat_symbol (libc, __getclktck, __libc_clk_tck, PEMU_LIBC_2_1_1);
#endif
