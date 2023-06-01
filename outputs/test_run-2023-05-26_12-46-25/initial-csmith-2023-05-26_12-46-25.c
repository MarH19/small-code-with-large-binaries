typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))
                                          ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;




typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
 extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
 extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
 extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
 extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
 extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
 extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
 extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
 extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
 extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
 extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
 extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
 extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
 extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
 extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
 extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
 extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
 extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
 extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
 extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
 extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern int fclose (FILE *__stream);
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s);
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static long __undefined;
#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 5;
   int32_t f1;
   signed f2 : 11;
   int32_t f3;
   int32_t f4;
   int32_t f5;
};
#pragma pack(pop)
static int32_t g_2 = 0x51FE77DDL;
static const int32_t g_14 = 0L;
static int8_t g_20 = (-4L);
static int8_t g_24 = 0xB4L;
static int8_t *g_23 = &g_24;
static uint8_t g_26 = 0xF6L;
static int32_t g_54 = 0x2E510B2DL;
static uint16_t g_90 = 0x032EL;
static uint32_t g_96 = 0xE1234CD2L;
static uint16_t g_98 = 0xF829L;
static int8_t g_100 = 0L;
static uint32_t g_102 = 9UL;
static int32_t g_104 = 0xCDEFDC03L;
static struct S0 g_105 = {1,6L,-7,0x224A3AAFL,0x5405D214L,0x02A751A5L};
static int64_t g_108 = 0x0F2F45F95DF25DB3LL;
static uint64_t g_142 = 18446744073709551615UL;
static int32_t **g_157 = (void*)0;
static int32_t *g_166 = &g_105.f4;
static int32_t **g_165 = &g_166;
static uint8_t g_175 = 0xB9L;
static int16_t g_216 = 0L;
static int32_t *g_224 = &g_105.f1;
static int32_t **g_223[2][1][6] = {{{&g_224,&g_224,&g_224,&g_224,&g_224,&g_224}},{{&g_224,&g_224,&g_224,&g_224,&g_224,&g_224}}};
static int32_t g_229[5][9][5] = {{{(-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L)},{4L,(-7L),(-7L),4L,1L},{(-4L),7L,0x2DE87007L,(-5L),(-5L)},{1L,4L,1L,1L,4L},{(-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L},{0x054000ADL,0x054000ADL,0x18954A2BL,4L,0xB1B2C0F5L},{(-6L),(-4L),0x0AB2DEA7L,0x0AB2DEA7L,0x0AB2DEA7L},{1L,0x18954A2BL,(-1L),1L,1L},{0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}},{{(-1L),1L,0x18954A2BL,1L,1L},{0xFD2DEE4CL,0x2DE87007L,0x2DE87007L,0xFD2DEE4CL,0L},{1L,(-7L),0x054000ADL,1L,1L},{(-1L),0xFD2DEE4CL,(-1L),0L,0xFD2DEE4CL},{1L,0x18954A2BL,1L,1L,1L},{(-6L),(-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L},{(-1L),1L,1L,1L,1L},{0x0AB2DEA7L,0x2DE87007L,(-1L),0x0AB2DEA7L,0L},{(-7L),1L,0x054000ADL,1L,(-7L)}},{{(-1L),(-6L),0x2DE87007L,0L,(-6L)},{(-7L),0x18954A2BL,0x18954A2BL,(-7L),1L},{0x0AB2DEA7L,0xFD2DEE4CL,(-5L),(-6L),(-6L)},{(-1L),(-7L),(-1L),1L,(-7L)},{(-6L),0x2DE87007L,0L,(-6L),0L},{1L,1L,0x054000ADL,(-7L),1L},{(-1L),0x0AB2DEA7L,0L,0L,0x0AB2DEA7L},{1L,0x18954A2BL,(-1L),1L,1L},{0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}},{{(-1L),1L,0x18954A2BL,1L,1L},{0xFD2DEE4CL,0x2DE87007L,0x2DE87007L,0xFD2DEE4CL,0L},{1L,(-7L),0x054000ADL,1L,1L},{(-1L),0xFD2DEE4CL,(-1L),0L,0xFD2DEE4CL},{1L,0x18954A2BL,1L,1L,1L},{(-6L),(-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L},{(-1L),1L,1L,1L,1L},{0x0AB2DEA7L,0x2DE87007L,(-1L),0x0AB2DEA7L,0L},{(-7L),1L,0x054000ADL,1L,(-7L)}},{{(-1L),(-6L),0x2DE87007L,0L,(-6L)},{(-7L),0x18954A2BL,0x18954A2BL,(-7L),1L},{0x0AB2DEA7L,0xFD2DEE4CL,(-5L),(-6L),(-6L)},{(-1L),(-7L),(-1L),1L,(-7L)},{(-6L),0x2DE87007L,0L,(-6L),0L},{1L,1L,0x054000ADL,(-7L),1L},{(-1L),0x0AB2DEA7L,0L,0L,0x0AB2DEA7L},{1L,0x18954A2BL,(-1L),1L,1L},{0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}}};
static int32_t g_230 = 0xE1F1B1EDL;
static uint64_t g_231 = 0x1CC49715F7E578D7LL;
static uint8_t g_246 = 0UL;
static int8_t *g_249 = &g_100;
static uint64_t g_300[1] = {18446744073709551615UL};
static int8_t func_1(void);
static int32_t func_3(int8_t p_4, int16_t p_5, uint32_t p_6, uint32_t p_7);
static int16_t func_8(const uint32_t p_9, const int32_t p_10, uint16_t p_11, int32_t p_12, uint8_t p_13);
static int64_t func_27(uint64_t p_28);
static int8_t func_37(uint16_t p_38);
static uint16_t func_40(int8_t * p_41, int8_t * p_42);
static int16_t func_43(int16_t p_44);
static uint8_t func_45(int8_t * p_46, uint8_t p_47, int8_t * const p_48, int8_t p_49, int8_t * p_50);
static const int32_t * func_72(uint8_t p_73, uint64_t p_74);
static uint64_t func_77(int8_t p_78, int32_t p_79, uint32_t p_80);
static int8_t func_1(void)
{
    uint64_t l_17 = 0x5B263D188047D203LL;
    int8_t *l_25[7] = {&g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24};
    int32_t l_287 = 1L;
    int32_t l_288 = 0x9F678E49L;
    int32_t l_289 = (-4L);
    int32_t l_290 = 0xE0EACEF5L;
    uint32_t l_291 = 18446744073709551610UL;
    struct S0 l_294 = {3,7L,-16,0x511E1152L,0xBCAEF4B9L,0x8183C4D5L};
    int32_t *l_297 = &l_294.f3;
    int32_t *l_298 = &l_294.f4;
    int32_t *l_299[2];
    int i;
    for (i = 0; i < 2; i++)
        l_299[i] = (void*)0;
    return (*g_249);
}
static int32_t func_3(int8_t p_4, int16_t p_5, uint32_t p_6, uint32_t p_7)
{
    uint32_t *l_259 = &g_96;
    int32_t l_262 = 0x389B0D2AL;
    uint8_t *l_263[10][7][3] = {{{&g_175,&g_246,&g_246},{&g_246,&g_175,&g_26},{(void*)0,&g_175,&g_26},{&g_246,&g_175,(void*)0},{&g_246,&g_26,(void*)0},{&g_175,(void*)0,&g_175},{(void*)0,&g_246,&g_175}},{{&g_246,&g_246,&g_246},{&g_26,&g_175,&g_26},{&g_26,&g_175,(void*)0},{&g_246,&g_26,&g_175},{&g_175,&g_246,(void*)0},{&g_175,&g_175,&g_246},{&g_175,&g_246,&g_246}},{{&g_175,&g_175,&g_175},{&g_246,&g_175,(void*)0},{&g_26,&g_175,(void*)0},{&g_26,&g_175,(void*)0},{&g_246,&g_246,&g_246},{(void*)0,&g_175,&g_175},{&g_175,&g_246,&g_246}},{{&g_246,&g_175,&g_246},{&g_246,&g_246,(void*)0},{(void*)0,&g_175,&g_175},{&g_246,&g_246,(void*)0},{&g_175,&g_26,&g_26},{&g_175,(void*)0,&g_246},{&g_246,&g_246,&g_175}},{{&g_26,&g_175,&g_246},{&g_246,&g_246,&g_26},{&g_26,&g_175,(void*)0},{&g_175,(void*)0,&g_175},{(void*)0,&g_175,(void*)0},{&g_175,(void*)0,&g_246},{(void*)0,&g_26,&g_246}},{{&g_175,&g_246,&g_175},{&g_246,&g_26,&g_246},{&g_246,&g_175,(void*)0},{(void*)0,&g_175,(void*)0},{&g_175,(void*)0,(void*)0},{&g_246,&g_175,&g_175},{&g_246,&g_175,&g_246}},{{&g_175,&g_246,&g_246},{&g_26,&g_246,(void*)0},{&g_175,&g_175,&g_175},{&g_26,&g_175,(void*)0},{&g_246,(void*)0,&g_26},{(void*)0,&g_175,&g_246},{&g_246,&g_175,&g_175}},{{&g_26,&g_26,&g_175},{&g_246,&g_246,(void*)0},{&g_246,&g_26,(void*)0},{(void*)0,(void*)0,&g_26},{&g_175,&g_175,&g_26},{&g_246,(void*)0,&g_246},{&g_246,&g_175,(void*)0}},{{&g_246,&g_246,&g_26},{&g_175,&g_175,&g_246},{&g_26,&g_246,(void*)0},{&g_175,(void*)0,&g_246},{&g_246,&g_26,(void*)0},{&g_26,&g_175,&g_26},{&g_26,&g_175,&g_246}},{{&g_26,&g_246,&g_246},{&g_175,&g_175,&g_175},{&g_246,&g_246,&g_175},{&g_175,&g_246,&g_175},{&g_175,&g_246,(void*)0},{&g_26,&g_175,&g_26},{(void*)0,&g_246,&g_26}}};
    int32_t l_264[7][9] = {{0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL,0x2647C96AL}};
    const struct S0 l_265[5][5][7] = {{{{1,9L,18,-1L,0L,0x68396E64L},{1,0xCA3CA688L,-11,0x420FCE74L,0L,-1L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{0,0x87020AE2L,19,0xD7BAE0BEL,3L,-5L},{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{1,0xCA3CA688L,-11,0x420FCE74L,0L,-1L}},{{-4,0L,42,-8L,1L,0x83F1A1F5L},{2,0xF889CA70L,-40,0x2D4A61B7L,8L,0xFE946A76L},{4,-1L,-3,0x58DAA210L,0x996D6FC5L,0x293830A0L},{-1,-8L,32,2L,0x6AFAFC6BL,0xE5901075L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{1,0xE6CA25ECL,32,0L,0xD2B0E516L,6L}},{{1,9L,18,-1L,0L,0x68396E64L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L}},{{-0,0L,29,0x1C2AC404L,0L,1L},{-0,0L,29,0x1C2AC404L,0L,1L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{-3,-1L,-36,0xD063AE7AL,0x9460910EL,0x156E5381L},{-3,0xFA5CC484L,40,0x2ABC809DL,0x00D427A9L,0xB437FCC7L},{-4,0x63B3740FL,-5,0x501EDD88L,0x91DB522AL,0xE0106499L},{-1,1L,-6,0x18AA95A0L,-1L,1L}},{{-3,0x875A1236L,13,0xD20FDB97L,0x646956F4L,0xBDACFC91L},{0,0x87020AE2L,19,0xD7BAE0BEL,3L,-5L},{1,-4L,22,-1L,-1L,0xFC9DC177L},{-0,0xF4D55906L,18,0x7AC0CD27L,0x44BFBE3BL,0L},{-4,0x4C795E8DL,-11,-5L,0x18A3AE36L,0xB4317193L},{2,0L,-29,0x1207660BL,-10L,-1L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L}}},{{{-3,-1L,7,6L,0x56745701L,0x609B3721L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L},{3,-1L,23,0x65FE046AL,0L,1L},{4,0x28A69773L,-40,2L,8L,6L},{-3,0xFA5CC484L,40,0x2ABC809DL,0x00D427A9L,0xB437FCC7L},{-3,1L,-9,0xE1ADE185L,-1L,-1L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L}},{{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L},{-4,0x3230D2C0L,-11,0x67C64D31L,0L,5L},{-4,0x3230D2C0L,-11,0x67C64D31L,0L,5L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-4,1L,7,1L,0x04D74A20L,0x93434B8EL}},{{-3,1L,-9,0xE1ADE185L,-1L,-1L},{-3,0xFA5CC484L,40,0x2ABC809DL,0x00D427A9L,0xB437FCC7L},{4,0x28A69773L,-40,2L,8L,6L},{3,-1L,23,0x65FE046AL,0L,1L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L},{-3,-1L,7,6L,0x56745701L,0x609B3721L},{0,0x3C51E475L,-0,0xD14520FFL,0x1010FD70L,9L}},{{2,0L,-29,0x1207660BL,-10L,-1L},{-4,0x4C795E8DL,-11,-5L,0x18A3AE36L,0xB4317193L},{-0,0xF4D55906L,18,0x7AC0CD27L,0x44BFBE3BL,0L},{1,-4L,22,-1L,-1L,0xFC9DC177L},{0,0x87020AE2L,19,0xD7BAE0BEL,3L,-5L},{-3,0x875A1236L,13,0xD20FDB97L,0x646956F4L,0xBDACFC91L},{-3,3L,-29,-1L,8L,0x7B236801L}},{{-4,0x63B3740FL,-5,0x501EDD88L,0x91DB522AL,0xE0106499L},{-3,0xFA5CC484L,40,0x2ABC809DL,0x00D427A9L,0xB437FCC7L},{-3,-1L,-36,0xD063AE7AL,0x9460910EL,0x156E5381L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{-0,0L,29,0x1C2AC404L,0L,1L},{-0,0L,29,0x1C2AC404L,0L,1L},{-4,0L,42,-8L,1L,0x83F1A1F5L}}},{{{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{1,9L,18,-1L,0L,0x68396E64L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L}},{{-4,0L,42,-8L,1L,0x83F1A1F5L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L},{-1,-8L,32,2L,0x6AFAFC6BL,0xE5901075L},{4,-1L,-3,0x58DAA210L,0x996D6FC5L,0x293830A0L},{2,0xF889CA70L,-40,0x2D4A61B7L,8L,0xFE946A76L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{0,-1L,21,8L,0x135AAF9DL,8L}},{{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{0,0x87020AE2L,19,0xD7BAE0BEL,3L,-5L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{1,0xCA3CA688L,-11,0x420FCE74L,0L,-1L},{1,9L,18,-1L,0L,0x68396E64L},{-0,0xF4D55906L,18,0x7AC0CD27L,0x44BFBE3BL,0L}},{{-1,1L,-6,0x18AA95A0L,-1L,1L},{-0,0L,29,0x1C2AC404L,0L,1L},{-4,1L,37,0x3BB5358FL,0L,1L},{4,-1L,-12,1L,0L,1L},{-4,1L,37,0x3BB5358FL,0L,1L},{-0,0L,29,0x1C2AC404L,0L,1L},{-1,1L,-6,0x18AA95A0L,-1L,1L}},{{-3,3L,-29,-1L,8L,0x7B236801L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{-4,0x50E1C6C2L,-13,0xEB27B658L,1L,0x54339D3AL},{4,0x7ECFCCCFL,0,-1L,0x37C6D80CL,0L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-0,0xF4D55906L,18,0x7AC0CD27L,0x44BFBE3BL,0L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L}}},{{{-3,-1L,-36,0xD063AE7AL,0x9460910EL,0x156E5381L},{3,0x5469824FL,17,-9L,0xA5BDB566L,0L},{4,-1L,-3,0x58DAA210L,0x996D6FC5L,0x293830A0L},{-2,-1L,-13,-8L,0x27784A77L,0x4EE0FCA2L},{-0,0xD84E0731L,9,0L,6L,0xA1B864D2L},{4,-1L,-12,1L,0L,1L},{3,0x5469824FL,17,-9L,0xA5BDB566L,0L}},{{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{-2,5L,11,0x918AFE7AL,0xBE541F4FL,-3L},{-4,0x50E1C6C2L,-13,0xEB27B658L,1L,0x54339D3AL},{-4,1L,7,1L,0x04D74A20L,0x93434B8EL},{-3,3L,-29,-1L,8L,0x7B236801L},{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{-3,3L,-29,-1L,8L,0x7B236801L}},{{4,-1L,-3,0x58DAA210L,0x996D6FC5L,0x293830A0L},{3,-1L,23,0x65FE046AL,0L,1L},{3,-1L,23,0x65FE046AL,0L,1L},{4,-1L,-3,0x58DAA210L,0x996D6FC5L,0x293830A0L},{-1,1L,-6,0x18AA95A0L,-1L,1L},{3,6L,1,0xD030C1CFL,0L,1L},{-3,-1L,7,6L,0x56745701L,0x609B3721L}},{{-1,-1L,34,0x0A0A7D36L,5L,-1L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-4,-1L,39,0L,8L,0xF6D8BA3AL},{1,0xCA3CA688L,-11,0x420FCE74L,0L,-1L},{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{0,0x87020AE2L,19,0xD7BAE0BEL,3L,-5L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L}},{{4,0x28A69773L,-40,2L,8L,6L},{-0,0xD84E0731L,9,0L,6L,0xA1B864D2L},{0,-1L,21,8L,0x135AAF9DL,8L},{-3,1L,-9,0xE1ADE185L,-1L,-1L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{-4,1L,37,0x3BB5358FL,0L,1L},{-3,-1L,7,6L,0x56745701L,0x609B3721L}}},{{{-0,0L,-44,0xC9C01FD6L,0xC2FFB9AFL,-8L},{-3,3L,-29,-1L,8L,0x7B236801L},{1,-4L,22,-1L,-1L,0xFC9DC177L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{1,-4L,22,-1L,-1L,0xFC9DC177L},{-3,3L,-29,-1L,8L,0x7B236801L}},{{-0,0xD84E0731L,9,0L,6L,0xA1B864D2L},{-1,1L,-6,0x18AA95A0L,-1L,1L},{3,0x2F4E081CL,10,0xD6C72585L,0x44CC3E1CL,2L},{2,0xF889CA70L,-40,0x2D4A61B7L,8L,0xFE946A76L},{-4,0x63B3740FL,-5,0x501EDD88L,0x91DB522AL,0xE0106499L},{-0,0xD84E0731L,9,0L,6L,0xA1B864D2L},{3,0x5469824FL,17,-9L,0xA5BDB566L,0L}},{{-4,0x3230D2C0L,-11,0x67C64D31L,0L,5L},{4,-1L,4,0x8CDF2CC5L,0xBC21BE6DL,-1L},{1,9L,18,-1L,0L,0x68396E64L},{1,-4L,22,-1L,-1L,0xFC9DC177L},{2,0L,-29,0x1207660BL,-10L,-1L},{1,0x6630A5C7L,4,-1L,8L,6L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L}},{{-3,0xFA5CC484L,40,0x2ABC809DL,0x00D427A9L,0xB437FCC7L},{-4,0L,42,-8L,1L,0x83F1A1F5L},{-3,-1L,7,6L,0x56745701L,0x609B3721L},{2,0xF889CA70L,-40,0x2D4A61B7L,8L,0xFE946A76L},{-3,1L,-9,0xE1ADE185L,-1L,-1L},{0,0x3C51E475L,-0,0xD14520FFL,0x1010FD70L,9L},{0,0x3C51E475L,-0,0xD14520FFL,0x1010FD70L,9L}},{{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{2,-8L,-39,0x86BFDA8DL,0x22F74B0DL,0x56719CF5L},{-2,0L,7,0x87003E30L,1L,0x1CA1A8B2L},{-1,0x73CA451FL,-28,1L,0xEDDF5BABL,0x0A7AF316L},{-0,0x28B6A91EL,44,0x29227F7AL,3L,1L},{1,9L,18,-1L,0L,0x68396E64L}}}};
    struct S0 l_266 = {-1,0xB4D85EDAL,-15,1L,0xDCA04AF3L,-6L};
    int i, j, k;
    (**g_165) = (((-1L) == (l_264[4][6] &= ((&g_108 == (void*)0) >= (((*l_259)++) < l_262)))) <= 0x39L);
    if (p_4)
    {
        uint32_t l_267 = 4294967295UL;
        int32_t *l_270 = &l_264[4][6];
        int32_t *l_271 = &g_230;
        int32_t *l_272 = (void*)0;
        int32_t *l_273 = &g_105.f4;
        int32_t *l_274 = &l_262;
        int32_t *l_275 = &l_264[6][4];
        int32_t *l_276 = (void*)0;
        int32_t *l_277[3];
        uint64_t l_278 = 18446744073709551607UL;
        int i;
        for (i = 0; i < 3; i++)
            l_277[i] = &g_105.f4;
        l_266 = l_265[2][0][6];
        l_267++;
        l_278--;
        for (g_230 = 2; (g_230 >= 0); g_230 -= 1)
        {
            int16_t l_281 = 0xA7BEL;
            return l_281;
        }
    }
    else
    {
        struct S0 *l_282 = &l_266;
        struct S0 l_283 = {-1,0xEB5AFFE6L,-38,0x201E680CL,3L,0L};
        l_283 = ((*l_282) = g_105);
    }
    return l_266.f5;
}
static int16_t func_8(const uint32_t p_9, const int32_t p_10, uint16_t p_11, int32_t p_12, uint8_t p_13)
{
    uint16_t l_258 = 0x4FA4L;
    l_258 = (!g_105.f4);
    return g_102;
}
static int64_t func_27(uint64_t p_28)
{
    uint16_t *l_254 = &g_98;
    struct S0 *l_255 = &g_105;
    struct S0 l_256 = {1,0xC61F8F8EL,36,8L,0x92C262D5L,-1L};
    (**g_165) ^= (g_216 , p_28);
    (*l_255) = ((((l_254 == (p_28 , (void*)0)) <= g_105.f1) , g_105.f4) , ((l_255 == l_255) , l_256));
    return l_256.f4;
}
static int8_t func_37(uint16_t p_38)
{
    return (*g_23);
}
static uint16_t func_40(int8_t * p_41, int8_t * p_42)
{
    struct S0 *l_250 = &g_105;
    int32_t l_251[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int i;
    (*l_250) = g_105;
    return l_251[2];
}
static int16_t func_43(int16_t p_44)
{
    const struct S0 *l_238 = &g_105;
    int32_t **l_239 = &g_166;
    uint8_t *l_243 = &g_175;
    uint8_t *l_244 = (void*)0;
    uint8_t *l_245[10] = {&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246};
    const int32_t *l_248[8] = {&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230};
    const int32_t **l_247 = &l_248[1];
    int i;
    (*l_247) = func_72((g_246 |= (l_238 == (((l_239 != l_239) || ((p_44 ^ (p_44 , ((((((safe_mul_func_int16_t_s_s((((0xEFCDEB692A35ED49LL < g_229[3][5][3]) ^ ((*l_243) = (!(g_102 ^ (((*g_165) = (*l_239)) == (void*)0))))) != 0x503FL), p_44)) || (*g_23)) < g_105.f4) <= 0x22332C2AF841971ELL) && (-1L)) , (**l_239)))) < 0x3D7CA0C704A2BC28LL)) , &g_105))), g_105.f5);
    return (**l_239);
}
static uint8_t func_45(int8_t * p_46, uint8_t p_47, int8_t * const p_48, int8_t p_49, int8_t * p_50)
{
    int32_t l_53[7][2][2] = {{{0L,0L},{0xE56979F9L,(-8L)}},{{0x81F51B43L,0x3C94681CL},{0x096A9CBDL,0x4AEC7014L}},{{(-1L),0x096A9CBDL},{0xA0262B09L,0x9757A836L}},{{0xA0262B09L,0x096A9CBDL},{(-1L),0x4AEC7014L}},{{0x096A9CBDL,0x3C94681CL},{0x81F51B43L,(-8L)}},{{0xE56979F9L,0L},{0L,(-1L)}},{{0x7F5E1753L,(-1L)},{0L,0L}}};
    int32_t l_63[5] = {0x1A3A4AA3L,0x1A3A4AA3L,0x1A3A4AA3L,0x1A3A4AA3L,0x1A3A4AA3L};
    uint32_t l_67 = 0x89715115L;
    int32_t *l_71 = (void*)0;
    int32_t *l_159 = &l_53[0][1][0];
    int32_t **l_158 = &l_159;
    const int32_t *l_202 = &g_105.f5;
    uint16_t *l_210[2];
    int16_t *l_215[2];
    int32_t *l_217 = &g_105.f1;
    struct S0 l_218 = {0,0xDD419D48L,-8,3L,-5L,-10L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_210[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_215[i] = &g_216;
    for (p_49 = 0; (p_49 >= 26); p_49 = safe_add_func_int32_t_s_s(p_49, 9))
    {
        int32_t l_56 = 0xAFFF16CEL;
        int32_t *l_155 = &g_104;
        int32_t **l_154 = &l_155;
        int32_t **l_168 = &g_166;
        uint32_t *l_173 = &g_102;
        uint8_t *l_186 = &g_175;
        int32_t *l_191 = &g_105.f5;
        uint32_t *l_198 = (void*)0;
        uint32_t *l_199 = &l_67;
        int8_t *l_200[10][4] = {{&g_100,(void*)0,&g_100,(void*)0},{&g_100,&g_100,&g_100,&g_100},{(void*)0,(void*)0,&g_100,&g_100},{&g_100,&g_100,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100,(void*)0},{(void*)0,&g_100,&g_100,(void*)0},{&g_100,(void*)0,&g_100,(void*)0},{&g_100,&g_100,&g_100,&g_100},{(void*)0,(void*)0,&g_100,&g_100}};
        const int32_t **l_201[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_201[i] = (void*)0;
        for (g_24 = 1; (g_24 >= 0); g_24 -= 1)
        {
            int8_t *l_55 = &g_24;
            int32_t l_64 = 0x24FFAD67L;
            int32_t l_66 = 0L;
            uint16_t l_135 = 0x7E90L;
            uint64_t l_147 = 0xF280801E7C2DC33BLL;
            for (p_47 = 0; p_47 < 7; p_47 += 1)
            {
                for (g_2 = 0; g_2 < 2; g_2 += 1)
                {
                    for (g_54 = 0; g_54 < 2; g_54 += 1)
                    {
                        l_53[p_47][g_2][g_54] = 0xD4463028L;
                    }
                }
            }
            if ((l_55 != &g_24))
            {
                uint32_t l_60[1];
                int32_t l_65 = 6L;
                uint16_t *l_97 = &g_98;
                const int32_t *l_131[8] = {&g_54,&g_105.f3,&g_54,&g_105.f3,&g_54,&g_105.f3,&g_54,&g_105.f3};
                int i;
                for (i = 0; i < 1; i++)
                    l_60[i] = 0xC87E1771L;
                for (g_54 = 0; (g_54 <= 1); g_54 += 1)
                {
                    int32_t *l_57 = &g_2;
                    int32_t *l_58 = &g_2;
                    int32_t *l_59[5][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_56,&l_56,&l_56,&l_56,&l_56,&l_56,&l_56},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_56,&l_56,&l_56,&l_56,&l_56,&l_56,&l_56},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_60[0]--;
                    l_67--;
                }
                for (g_2 = 0; (g_2 <= 1); g_2 += 1)
                {
                    uint16_t l_87 = 0x9F61L;
                    int32_t *l_132 = &l_63[4];
                    for (l_65 = 0; (l_65 <= 1); l_65 += 1)
                    {
                        int32_t **l_70 = (void*)0;
                        uint16_t *l_88 = (void*)0;
                        uint16_t *l_89 = &g_90;
                        uint32_t *l_95 = &g_96;
                        int8_t *l_99[8];
                        uint32_t *l_101 = &g_102;
                        int32_t *l_103[9] = {&l_53[(g_2 + 5)][g_2][g_24],&g_104,&g_104,&l_53[(g_2 + 5)][g_2][g_24],&g_104,&g_104,&l_53[(g_2 + 5)][g_2][g_24],&g_104,&g_104};
                        const int32_t **l_130[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_99[i] = &g_100;
                        l_71 = (void*)0;
                        l_131[0] = func_72((l_53[(g_24 + 3)][l_65][g_24] == (((*l_89) = (safe_div_func_uint64_t_u_u((func_77(l_53[(g_2 + 5)][g_2][g_24], (g_104 = (l_56 ^= (((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_53[(l_65 + 1)][l_65][g_24] , (safe_rshift_func_int16_t_s_u(g_14, ((*l_89) &= l_87)))), ((*l_101) = (safe_lshift_func_int8_t_s_u((g_100 = (safe_sub_func_uint32_t_u_u(((*l_95) = p_47), (l_97 == &g_98)))), (g_14 == p_47)))))) , 3L), 1UL)) <= p_49) == g_14))), l_65) , l_56), g_98))) > 0x20E2L)), g_24);
                        l_132 = &l_63[1];
                    }
                    for (g_102 = 0; (g_102 == 53); ++g_102)
                    {
                        int32_t l_140 = 0x5C639B07L;
                        uint64_t *l_141 = &g_142;
                        int64_t *l_148 = &g_108;
                        const int32_t **l_149 = &l_131[0];
                        (*l_149) = func_72(l_135, (0xE3L == (((safe_mod_func_uint8_t_u_u(((-9L) & (safe_mod_func_uint32_t_u_u(0UL, 3UL))), (((((*l_141) = l_140) , (safe_div_func_uint32_t_u_u(p_47, (((*l_148) = (safe_sub_func_int64_t_s_s(g_105.f2, (l_147 ^= ((*l_141) = 0x4A0DC95FA104C7A4LL))))) | p_49)))) <= g_2) & 0xBEL))) , 1L) | l_56)));
                        l_56 |= 0L;
                    }
                }
            }
            else
            {
                return p_47;
            }
            for (g_105.f1 = 0; (g_105.f1 < 1); g_105.f1++)
            {
                const int32_t *l_153 = &l_53[0][0][0];
                const int32_t **l_152 = &l_153;
                int32_t ***l_156[4] = {&l_154,&l_154,&l_154,&l_154};
                int32_t *l_160 = &l_64;
                int32_t *l_161 = &g_105.f5;
                int i;
                (*l_161) |= ((*l_160) = ((p_47 ^ (l_152 == (l_158 = (g_157 = l_154)))) != g_105.f0));
            }
        }
        for (g_98 = 0; (g_98 <= 4); g_98 += 1)
        {
            int i;
        }
        if ((*g_166))
            continue;
    }
    if (((*p_50) >= ((safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((!((safe_rshift_func_int8_t_s_u(((g_90++) && 0UL), (safe_mod_func_int16_t_s_s((l_63[3] = p_49), (((l_159 = l_217) == (l_218 , func_72(((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((-8L), ((void*)0 == g_223[1][0][0]))) , (g_100 || 0xACL)), p_47)) > 3L), p_47))) & (-1L)))))) == 0x0DA4F588L)), p_47)), g_105.f3)) >= g_216)))
    {
        int32_t *l_225 = (void*)0;
        int32_t *l_226 = &g_105.f3;
        int32_t *l_227 = &l_63[4];
        int32_t *l_228[6][3][10] = {{{&g_105.f3,(void*)0,&l_218.f4,&g_54,&l_218.f4,(void*)0,&l_218.f4,&g_54,&l_218.f4,(void*)0},{&g_105.f3,&l_218.f3,&l_218.f4,&l_218.f4,&l_218.f4,&g_54,&g_54,&g_54,&g_54,&l_218.f4},{&l_218.f4,&g_105.f3,&g_105.f3,&l_218.f4,&g_105.f4,&g_54,&g_105.f3,&l_218.f4,&l_218.f4,&l_218.f4}},{{&g_105.f3,(void*)0,&l_218.f3,&l_218.f4,&l_218.f3,(void*)0,&g_105.f3,&g_105.f3,&l_218.f4,&l_218.f3},{&g_105.f3,&g_54,&g_105.f4,&l_218.f4,&g_105.f3,&g_105.f3,&l_218.f4,&g_105.f4,&g_54,&g_105.f3},{&g_54,&g_54,&l_218.f4,&l_218.f4,&l_218.f4,&l_218.f3,&g_105.f3,&l_218.f3,&l_218.f4,&l_218.f4}},{{&l_218.f4,(void*)0,&l_218.f4,&g_54,&l_218.f4,(void*)0,&g_105.f3,&l_218.f3,&l_218.f3,&g_105.f3},{&l_218.f4,&g_105.f3,(void*)0,(void*)0,&g_105.f3,&l_218.f4,&g_54,&l_218.f3,&l_218.f4,&l_218.f3},{(void*)0,&l_218.f3,&l_218.f4,&g_105.f4,&l_218.f3,&g_105.f4,&l_218.f4,&l_218.f3,(void*)0,&l_218.f4}},{{(void*)0,(void*)0,&l_218.f4,&g_54,&g_105.f4,&l_218.f4,&l_218.f4,&g_105.f4,&g_54,&l_218.f4},{&l_218.f4,&l_218.f4,&g_105.f4,&g_54,&l_218.f4,(void*)0,(void*)0,&g_105.f3,(void*)0,(void*)0},{&l_218.f4,&g_105.f4,&l_218.f3,&g_105.f4,&l_218.f4,&l_218.f3,(void*)0,&l_218.f4,&l_218.f4,&l_218.f4}},{{&g_54,&l_218.f4,&g_105.f3,(void*)0,(void*)0,&g_105.f3,&l_218.f4,&g_54,&l_218.f3,&l_218.f4},{&g_105.f3,(void*)0,&l_218.f4,&g_54,&l_218.f4,(void*)0,&l_218.f4,&g_54,&l_218.f4,(void*)0},{&g_105.f3,&l_218.f3,&l_218.f4,&l_218.f4,&l_218.f4,&g_54,&g_54,&g_54,&l_218.f3,&l_218.f3}},{{&l_218.f4,&l_218.f4,&l_218.f4,&l_218.f4,(void*)0,&l_218.f3,&l_218.f4,&g_105.f4,&l_218.f3,&g_105.f4},{&l_218.f4,&g_54,&g_105.f3,&g_105.f4,&g_105.f3,&g_54,&l_218.f4,&l_218.f4,&l_218.f3,&l_218.f4},{&l_218.f4,&l_218.f3,(void*)0,&l_218.f4,&l_218.f4,&l_218.f4,&l_218.f4,(void*)0,&l_218.f3,&l_218.f4}}};
        int i, j, k;
        --g_231;
    }
    else
    {
        struct S0 *l_237 = &l_218;
        struct S0 **l_236 = &l_237;
        for (l_218.f5 = 0; (l_218.f5 > (-9)); --l_218.f5)
        {
            if ((**g_165))
                break;
        }
        (*l_236) = &g_105;
    }
    return p_49;
}
static const int32_t * func_72(uint8_t p_73, uint64_t p_74)
{
    int32_t *l_122 = &g_54;
    int32_t *l_123 = &g_105.f4;
    int32_t *l_124 = &g_54;
    int32_t *l_125 = &g_105.f3;
    int32_t *l_126[10][4] = {{&g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3},{&g_105.f5,&g_105.f3,&g_105.f5,&g_105.f5},{&g_105.f3,&g_105.f3,&g_105.f5,&g_105.f3},{&g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3},{&g_105.f5,&g_105.f3,&g_105.f5,&g_105.f5},{&g_105.f3,&g_105.f3,&g_105.f5,&g_105.f3},{&g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3},{&g_105.f5,&g_105.f3,&g_105.f5,&g_105.f5},{&g_105.f3,&g_105.f3,&g_105.f5,&g_105.f3},{&g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3}};
    uint8_t l_127 = 0xFBL;
    int i, j;
    --l_127;
    return l_126[1][2];
}
static uint64_t func_77(int8_t p_78, int32_t p_79, uint32_t p_80)
{
    int32_t *l_106 = &g_104;
    int64_t *l_107 = &g_108;
    const int32_t l_109[9][1][4] = {{{0x2A731AC7L,0x2A731AC7L,1L,0x0B00A497L}},{{(-7L),(-1L),(-7L),1L}},{{(-7L),1L,1L,(-7L)}},{{0x2A731AC7L,1L,0x0B00A497L,1L}},{{1L,(-1L),0x0B00A497L,0x0B00A497L}},{{0x2A731AC7L,0x2A731AC7L,1L,0x0B00A497L}},{{(-7L),(-1L),(-7L),1L}},{{(-7L),1L,1L,(-7L)}},{{0x2A731AC7L,1L,0x0B00A497L,1L}}};
    uint16_t *l_114 = &g_90;
    int32_t *l_118 = &g_105.f1;
    int32_t **l_117 = &l_118;
    int32_t *l_120 = (void*)0;
    int32_t **l_119 = &l_120;
    int32_t *l_121 = &g_54;
    int i, j, k;
    g_105 = g_105;
    g_105.f4 = ((*l_121) = (((((l_106 == ((((p_78 , (((*l_107) &= g_100) ^ (l_109[1][0][0] >= ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((&g_98 == (l_114 = &g_90)), 9)), 15)) > (l_109[1][0][0] <= (((g_105.f3 = (safe_div_func_uint32_t_u_u((&g_104 == ((*l_119) = ((*l_117) = &g_104))), g_2))) > p_80) != g_104)))))) , &g_2) != (void*)0) , &p_79)) == p_78) && 0xB6L) , 0x62E654CDFF1806A2LL) == 6UL));
    return (*l_121);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_229[i][j][k], "g_229[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_300[i], "g_300[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
