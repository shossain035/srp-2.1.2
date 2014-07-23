/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define if you have <vfork.h>.  */
/* #undef HAVE_VFORK_H */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define vfork as fork if vfork does not work.  */
/* #undef vfork */

#define POSIX_TERMIOS 1

#define HAVE_SHADOW 1

/* #undef NOENCRYPTION */

/* #undef GNU_MP */

/* #undef GCRYPT */

/* #undef MPI */

/* #undef TOMCRYPT */

/* #undef TOMMATH */

/* #undef CRYPTOLIB */

#define OPENSSL 1

/* #undef KERBEROS */

/* #undef OPENSSL_DES */

/* #undef CRYPTOLIB_DES */

#define FTP_BUFSIZ 10240

#define SRP 1

#define FTPAUTH 1

#define FTPAUTH_PATH "/etc/ftpauth"

#define HAVE_SETUTENT 1

#define HAVE_SETUTXENT 1

#define HAVE_UPDWTMP 1

#define HAVE_UPDWTMPX 1

/* #undef NO_UT_EXIT */

/* #undef NO_UT_HOST */

/* #undef NO_UT_PID */

/* #undef NO_UT_TYPE */

#define POSIX_SIGNALS 1

/* #undef USE_SIGPROCMASK */

/* #undef WAIT_USES_INT */

/* #undef USE_GLOB */

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getdtablesize function.  */
#define HAVE_GETDTABLESIZE 1

/* Define if you have the getusershell function.  */
#define HAVE_GETUSERSHELL 1

/* Define if you have the setenv function.  */
/* #undef HAVE_SETENV */

/* Define if you have the seteuid function.  */
#define HAVE_SETEUID 1

/* Define if you have the setresuid function.  */
#define HAVE_SETRESUID 1

/* Define if you have the setreuid function.  */
#define HAVE_SETREUID 1

/* Define if you have the <stdarg.h> header file.  */
#define HAVE_STDARG_H 1

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the crypt library (-lcrypt).  */
#define HAVE_LIBCRYPT 1

/* Define if you have the dl library (-ldl).  */
#define HAVE_LIBDL 1

/* Define if you have the nsl library (-lnsl).  */
#define HAVE_LIBNSL 1

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Name of package */
#define PACKAGE "srpftp"

/* Version number of package */
#define VERSION "1.1.1"

