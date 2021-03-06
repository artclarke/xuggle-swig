/* ----------------------------------------------------------------------------- 
 * This file is part of SWIG, which is licensed as a whole under version 3 
 * (or any later version) of the GNU General Public License. Some additional
 * terms also apply to certain portions of SWIG. The full details of the SWIG
 * license and copyrights can be found in the LICENSE and COPYRIGHT files
 * included with the SWIG source code as distributed by the SWIG developers
 * and at http://www.swig.org/legal.html.
 *
 * swigwrap.h
 *
 * Functions related to wrapper objects.
 * ----------------------------------------------------------------------------- */

/* $Id: swig.h 9635 2007-01-12 01:44:16Z beazley $ */

typedef struct Wrapper {
    Hash *localh;
    String *def;
    String *locals;
    String *code;
} Wrapper;

extern Wrapper *NewWrapper();
extern void     DelWrapper(Wrapper *w);
extern void     Wrapper_compact_print_mode_set(int flag);
extern void     Wrapper_pretty_print(String *str, File *f);
extern void     Wrapper_compact_print(String *str, File *f);
extern void     Wrapper_print(Wrapper *w, File *f);
extern int      Wrapper_add_local(Wrapper *w, const String_or_char *name, const String_or_char *decl);
extern int      Wrapper_add_localv(Wrapper *w, const String_or_char *name, ...);
extern int      Wrapper_check_local(Wrapper *w, const String_or_char *name);
extern char    *Wrapper_new_local(Wrapper *w, const String_or_char *name, const String_or_char *decl);
extern char    *Wrapper_new_localv(Wrapper *w, const String_or_char *name, ...);
