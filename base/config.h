/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Define to enable password aging.  */
#define AGING 1

/* Define if struct passwd has pw_age.  */
/* #undef ATT_AGE */

/* Define if struct passwd has pw_comment.  */
/* #undef ATT_COMMENT */

/* Define if struct passwd has pw_quota.  */
/* #undef BSD_QUOTA */

/* Define if struct shadow has extra fields. */
#define SP_EXTRA 1

/* Define to use "old" dbm.  */
/* #undef DBM */

/* Define to support 16-character passwords.  */
/* #undef DOUBLESIZE */

/* Define if you want my getgrent routines.  */
/* #undef GETGRENT */

/* Define if you want my getpwent routines.  */
/* #undef GETPWENT */

/* Define if struct lastlog has ll_host */
#define HAVE_LL_HOST 1

/* Define if utmp.h defines struct lastlog. */
#define UTMP_LASTLOG 1

/* Working shadow group support in libc?  */
/* #undef HAVE_SHADOWGRP */

/* Path for lastlog file.  */
#define LASTLOG_FILE "/var/log/lastlog"

/* Path for faillog file.  */
#define FAILLOG_FILE "/var/log/faillog"

/* Path for sulog file.  */
/* #undef SULOG_FILE */

/* Location of system mail spool directory.  */
#define MAIL_SPOOL_DIR "/var/spool/mail"

/* Name of user's mail spool file if stored in user's home directory.  */
/* #undef MAIL_SPOOL_FILE */

/* Define if you have secure RPC.  */
/* #undef DES_RPC */

/* Define to support the MD5-based password hashing algorithm.  */
#define MD5_CRYPT 1

/* Define to use ndbm.  */
/* #undef NDBM */

/* Define to support OPIE one-time password logins.  */
/* #undef OPIE */

/* Define to support Pluggable Authentication Modules.  */
/* #undef PAM */

/* Define to support the pam_misc library.  */
/* #undef PAM_MISC */

/* Define to indicate old-style pam_strerror.  */
/* #undef PAM_OLD */

/* Define if login should support the -r flag for rlogind.  */
#define RLOGIN 1

/* Define to the ruserok() "success" return value (0 or 1).  */
#define RUSEROK 0

/* Define to support the shadow password file.  */
#define SHADOWPWD 1

/* Define to support the shadow group file.  */
/* #undef SHADOWGRP */

/* Define to support S/Key logins.  */
/* #undef SKEY */

/* Define to support SecureWare(tm) long passwords.  */
/* #undef SW_CRYPT */

/* Define to use syslog().  */
#define USE_SYSLOG 1

/* Define if you have ut_host in struct utmp.  */
#define UT_HOST 1

/* Path for utmp file.  */
#define _UTMP_FILE "/var/run/utmp"

/* Define to ut_name if struct utmp has ut_name (not ut_user).  */
#define UT_USER ut_user

/* Path for wtmp file.  */
#define _WTMP_FILE "/var/log/wtmp"

/* Defined if you have libcrypt.  */
#define HAVE_LIBCRYPT 1

/* Defined if you have libcrack.  */
/* #undef HAVE_LIBCRACK */

/* Cracklib dictionary path.  */
/* #undef CRACKLIB_DICTPATH */

/* Colon sep. paths to search if CRACKLIB_DICTPATH or login.defs is wrong. */
#define DEFAULT_CRACKLIB_DICTPATH "/lib:/usr/local/lib:/usr/lib:/usr/share/lib:/usr/local/share/lib"

/* Defined if you have the ts&szs cracklib.  */
/* #undef HAVE_LIBCRACK_HIST */

/* Defined if it includes *Pw functions.  */
/* #undef HAVE_LIBCRACK_PW */

/* Path to chfn program.  */
#define CHFN_PROGRAM "/usr/bin/chfn"

/* Path to chsh program.  */
#define CHSH_PROGRAM "/usr/bin/chsh"

/* Path to gpasswd program.  */
#define GPASSWD_PROGRAM "/usr/bin/gpasswd"

/* Path to passwd program.  */
#define PASSWD_PROGRAM "/usr/bin/passwd"

/* Define to support JFH's auth. methods.  UNTESTED.  */
/* #undef AUTH_METHODS */

/* Define to support /etc/login.access login access control.  */
#define LOGIN_ACCESS 1

/* Define to support /etc/suauth su access control.  */
#define SU_ACCESS 1

/* Define to support the "console groups" feature.  */
#define CONSOLE_GROUPS 1

/* Package name.  */
#define PACKAGE "shadow"

/* Version.  */
#define VERSION "001101"

/* Added these from Kerberos update_utmp */
#define HAVE_GETUTENT 1

/* EJ added these */
/* #undef NOISY_SHELL */

/* Define if you have a member ut_syslen in struct utmp or utmpx.  */
/* #undef HAVE_UT_SYSLEN */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to 1 if you have the `a64l' function. */
#define HAVE_A64L 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getspnam' function. */
#define HAVE_GETSPNAM 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getusershell' function. */
#define HAVE_GETUSERSHELL 1

/* Define to 1 if you have the `getutent' function. */
#define HAVE_GETUTENT 1

/* Define to 1 if you have the <gshadow.h> header file. */
#define HAVE_GSHADOW_H 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <lastlog.h> header file. */
#define HAVE_LASTLOG_H 1

/* Define to 1 if you have the `inet' library (-linet). */
/* #undef HAVE_LIBINET */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `putgrent' function. */
#define HAVE_PUTGRENT 1

/* Define to 1 if you have the `putpwent' function. */
#define HAVE_PUTPWENT 1

/* Define to 1 if you have the `putspent' function. */
#define HAVE_PUTSPENT 1

/* Define to 1 if you have the `rename' function. */
#define HAVE_RENAME 1

/* Define to 1 if you have the `rmdir' function. */
#define HAVE_RMDIR 1

/* Define to 1 if you have the `setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `sgetgrent' function. */
/* #undef HAVE_SGETGRENT */

/* Define to 1 if you have the `sgetpwent' function. */
/* #undef HAVE_SGETPWENT */

/* Define to 1 if you have the `sgetspent' function. */
#define HAVE_SGETSPENT 1

/* Define to 1 if you have the <sgtty.h> header file. */
#define HAVE_SGTTY_H 1

/* Define to 1 if you have the <shadow.h> header file. */
#define HAVE_SHADOW_H 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if your `struct stat' has `st_rdev'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_RDEV' instead. */
#define HAVE_ST_RDEV 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/label.h> header file. */
/* #undef HAVE_SYS_LABEL_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the <ulimit.h> header file. */
#define HAVE_ULIMIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <usersec.h> header file. */
/* #undef HAVE_USERSEC_H */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Name of package */
#define PACKAGE "shadow"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "001101"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
