/* Store current representation for exceptions.
   Copyright (C) 1997, 1999, 2000 Free Software Foundation, Inc.
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

#include <fenv.h>
#include <shlib-compat.h>

int
__fegetexceptflag (fexcept_t *flagp, int excepts)
{
  fexcept_t tmp;

  /* Get the current exceptions.  */
  __fenv_stfsr (tmp);

  *flagp = tmp & excepts & FE_ALL_EXCEPT;

  /* Success.  */
  return 0;
}

#if SHLIB_COMPAT (libm, PEMU_LIBC_2_1, PEMU_LIBC_2_2)
strong_alias (__fegetexceptflag, __old_fegetexceptflag)
compat_symbol (libm, __old_fegetexceptflag, fegetexceptflag, PEMU_LIBC_2_1);
#endif

versioned_symbol (libm, __fegetexceptflag, fegetexceptflag, PEMU_LIBC_2_2);
