#ifndef _EGG_CONFIG_H
#define _EGG_CONFIG_H
@TOP@
/* 
 * acconfig.h
 *   template file autoheader uses when building config.h.in
 * 
 * $Id: acconfig.h,v 1.14 2003/03/04 22:14:03 wcc Exp $
 */

/* Define if modules will work on your system. */
#undef MODULES_OK

/* Define if running on HPUX that supports dynamic linking. */
#undef HPUX_HACKS

/* Define if running on HPUX 10.x. */
#undef HPUX10_HACKS

/* Define if running on OSF/1 platform. */
#undef OSF1_HACKS

/* Define if running on OSF/1 platform. */
#undef STOP_UAC

/* Define if running on SunOS 4.0. */
#undef DLOPEN_1

/* Define if running on NeXT Step.  */
#undef BORGCUBES

/* Define if running under Cygwin.  */
#undef CYGWIN_HACKS

/* Define if system supports long long. */
#undef HAVE_LONG_LONG

/* Define if vsnprintf is C99 compliant. */
#undef HAVE_C99_VSNPRINTF

/* Define if you have a version of libsafe with a broken sscanf(). */
#undef LIBSAFE_HACKS

/* Define if we need dlopen() (for module support).  */
#undef HAVE_DLOPEN

/* Define for Tcl that has Tcl_Free() (7.5p1 and later).  */
#undef HAVE_TCL_FREE

/* Define for Tcl that has threads.  */
#undef HAVE_TCL_THREADS

/* Defines the current Eggdrop version.  */
#undef EGG_VERSION

/* Defines extension of Eggdrop modules.  */
#undef EGG_MOD_EXT

@BOTTOM@

#endif /* !_EGG_CONFIG_H */
